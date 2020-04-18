#include "rtos.hpp"         // for Rtos
#include "event.hpp"        // for Event
#include "rccregisters.hpp" // for RCC
#include "GpioPort.hpp" // for Port's
#include "IGpio.hpp" //for Port's (virtual set)
#include "Button.hpp" //for Button
#include "ButtonTask.hpp" //for ButtonTask
#include "gpioaregisters.hpp" //for GPIOA-registers
#include "gpiocregisters.hpp" //for GPIOC-registers
#include "gpiobregisters.hpp" //for GPIOB-registers
#include "spi2registers.hpp" //for setup SPI
#include "SPI.hpp" //for Button
#include "DislpayDriver.hpp" //for Display

std::uint32_t SystemCoreClock = 16'000'000U;

extern "C" {
int __low_level_init(void)
{
 
  SPI2::CR1::MSTR::Master::Set(); // SPI master
  SPI2::CR1::BIDIMODE::Unidirectional2Line::Set(); //2linii peredachi
  SPI2::CR1::DFF::Data8bit::Set(); //format 8bit
  SPI2::CR1::CPOL::High::Set(); //cpol high
  SPI2::CR1::CPHA::Phase2edge::Set(); //cpha setup  
  SPI2::CR1::SSM::NssSoftwareEnable::Set(); //ti net => want ssm and ssi
  SPI2::CR1::SSI::Value1::Set();
  SPI2::CR1::BR::PclockDiv2::Set(); 
  SPI2::CR1::LSBFIRST::MsbFisrt::Set(); //starhii bit first
  SPI2::CR1::CRCEN::CrcCalcDisable::Set() ;
  SPI2::CR1::SPE::Enable::Set(); //vkluchenie spi
  //Switch on external 16 MHz oscillator
  RCC::CR::HSION::On::Set();
  while (RCC::CR::HSIRDY::NotReady::IsSet())
  {

  }
  //Switch system clock on external oscillator
  RCC::CFGR::SW::Hsi::Set();
  while (!RCC::CFGR::SWS::Hsi::IsSet())
  {

  }

  RCC::APB2ENR::SYSCFGEN::Enable::Set(); 
  RCC::APB1ENR::SPI2EN::Enable::Set(); //SPI k istochiky taktirovaniya  

  RCC::AHB1ENR::GPIOAEN::Enable::Set(); //GPIOA k istochiky taktirovaniya  
  RCC::AHB1ENR::GPIOBEN::Enable::Set(); //GPIOA k istochiky taktirovaniya 
  RCC::AHB1ENR::GPIOCEN::Enable::Set(); //GPIOA k istochiky taktirovaniya 
  
  GPIOB::MODER::MODER13::Alternate::Set(); //Alternate moder 13
  GPIOB::MODER::MODER15::Alternate::Set(); //Alternate moder 15
  GPIOB::AFRH::AFRH13::Af5::Set(); 
  GPIOB::AFRH::AFRH15::Af5::Set();
  return 1;
}
}

OsWrapper::Event event{500ms, 1}; //FIXME ����� ��� �������
ButtonTask myButtonTask(event);
//MyTask myTask(event, UserButton::GetInstance()); //FIXME ����� ��� �������

int main()
{
  //GpioPort<GPIOC,13> GPort;
  //GPort.SetAlternate();

  GpioPort<GPIOB, 1U> CSPort;
  CSPort.SetOutput();
  GpioPort<GPIOB,2U> DCPort;
  DCPort.SetOutput();
  GpioPort<GPIOC, 3U> RSTPort;
  RSTPort.SetOutput();
  GpioPort<GPIOC, 2U> BUSYPort;
  BUSYPort.SetInput();
  //GpioPort<GPIOB, 2U> DINPort;
  //DINPort.SetAlternate();
  //GpioPort<GPIOB, 3U> CLKPort;
  //CLKPort.SetAlternate();
  
  DisplayDriver<Spi<SPI2>> Display(CSPort,DCPort,RSTPort,BUSYPort); //,DINPort,CLKPort
  Display.Init();
  Display.ClearDisplay ();
  using namespace OsWrapper;
  Rtos::CreateThread(myButtonTask,"Button", ThreadPriority::normal);
  //Rtos::CreateThread(myTask, "myTask", ThreadPriority::lowest);   //FIXME ����� ��� �������
  Rtos::Start();
  return 0;
}
