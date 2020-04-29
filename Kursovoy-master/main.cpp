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
#include "usart2registers.hpp" //for usart2-registers
#include "USART.hpp" //for setup USART
#include "susudefs.hpp" //for SusuString
#include "i2c1registers.hpp" //for i2c1
#include "SMBus.hpp" //for SMBus (I2C1)

//std::uint32_t SystemCoreClock = 16'000'000U;

using namespace std;
constexpr SusuStringView message (" Hello World!") ;

extern "C" {
int __low_level_init(void)
{
 
  //настройка СПИ
  
  SPI2::CR1::MSTR::Master::Set(); // SPI master
  SPI2::CR1::BIDIMODE::Unidirectional2Line::Set(); //Включение 2 линий передач
  SPI2::CR1::DFF::Data8bit::Set(); //Формат 8 бит
  SPI2::CR1::CPOL::High::Set(); //Уровень CPOl высокий
  SPI2::CR1::CPHA::Phase2edge::Set(); //Установка CPHA  
  SPI2::CR1::SSM::NssSoftwareEnable::Set(); //ti net => want ssm and ssi
  SPI2::CR1::SSI::Value1::Set();
  SPI2::CR1::BR::PclockDiv2::Set(); 
  SPI2::CR1::LSBFIRST::MsbFisrt::Set(); //Первый бит - старший
  SPI2::CR1::CRCEN::CrcCalcDisable::Set() ;
  SPI2::CR1::SPE::Enable::Set(); //Включение СПИ
  //Switch on external 16 MHz oscillator
  
  //setup USART2
  USART2::CR2::STOP::Value1::Set(); // 1stop-bit 
  USART2::CR1::M::Data9bits::Set(); //dlina 1 start-bit, 9 bit dannix
  USART2::CR1::PCE::ParityControlEnable::Set(); 
  USART2::CR1::PS::ParityEven::Set(); //chetnost' (chetnii)
  
  //setup I2C1 (SmBus)
  
  I2C1::CR1::SMBUS::SmBusMode:: Set(); //Включение интерфейса SMBus.
  I2C1::CR1::SMBTYPE::Host::Set(); //Тип устройства в режиме.
  I2C1::CR1::ACK::Acknowledge::Set(); //Разрешение отправки.
  I2C1::OAR1::ADDMODE:: Bits7::Set(); //7-разрядный режим адресации.
  I2C1::OAR1::ADD7::Set(0x01U);
  I2C1::CCR::F_S::FastMode::Set(); 
  I2C1::CCR::DUTY::DutyCycles_2::Set();
  
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
  RCC::APB1ENR::I2C1EN::Enable::Set(); //I2C1 к источнику тактирования
  RCC::APB1ENR::USART2EN::Enable::Set();//USART k istochiky taktirovaniya  
   
  RCC::AHB1ENR::GPIOAEN::Enable::Set(); //GPIOA k istochiky taktirovaniya  
  RCC::AHB1ENR::GPIOBEN::Enable::Set(); //GPIOA k istochiky taktirovaniya 
  RCC::AHB1ENR::GPIOCEN::Enable::Set(); //GPIOA k istochiky taktirovaniya 
  
  //for Display
  GPIOB::MODER::MODER13::Alternate::Set(); //Alternate moder 13
  GPIOB::MODER::MODER15::Alternate::Set(); //Alternate moder 15
  GPIOB::AFRH::AFRH13::Af5::Set();  //clk
  GPIOB::AFRH::AFRH15::Af5::Set(); //din
  
  //for I2C1 or SMBus
  GPIOB::MODER::MODER5::Alternate::Set(); //Alternate moder 5
  GPIOB::MODER::MODER7::Alternate::Set(); //Alternate moder 7
  GPIOB::AFRL::AFRL5::Af5::Set();  //sda
  GPIOB::AFRL::AFRL7::Af5::Set();  //scl
  
  //for USART 
  GPIOA::MODER::MODER2::Alternate::Set(); //Alternate moder 2
  GPIOA::MODER::MODER3::Alternate::Set(); //Alternate moder 3
  
  GPIOA::OTYPER::OT2::OutputPushPull::Set(); // output type setting dvyhtaktinii vixod(Output push-pull) 
  GPIOA::OTYPER::OT3::OutputPushPull::Set(); // output type setting dvyhtaktinii vixod(Output push-pull) 
  
  GPIOA::PUPDR::PUPDR2::PullUp::Set(); //pull-up porta A.2 (podtyazjka k 1)
  GPIOA::PUPDR::PUPDR3::PullUp::Set(); //pull-up porta A.3 (podtyazjka k 1)
  GPIOA::AFRL::AFRL2::Af7::Set(); //A2
  GPIOA::AFRL::AFRL3::Af7::Set(); //A3
  return 1;
}
}

OsWrapper::Event event{500ms, 1}; //FIXME Чисто для примера
ButtonTask myButtonTask(event);
//MyTask myTask(event, UserButton::GetInstance()); //FIXME Чисто для примера

int main()
{
  GpioPort<GPIOB, 2U> SDAPort;
  SDAPort.SetAlternate();
  GpioPort<GPIOB, 3U> SCLPort;
  SCLPort.SetAlternate();
  
  SMBus<I2C1> SMBUS;
  SMBUS.WriteByte(1);
  
  Spi<SPI2> spi;
  spi.WriteByte(3);
      
  USART<USART2, 16000000U> UsartConfig;
  UsartConfig.SetSamplingMode(SamplingMode::Mode8);
  UsartConfig.SetSpeed(Speed::Speed9600);
  
  UsartConfig.On(); 
  for (;;) 
  {
    UsartConfig.SendData(message.str, message.size) ;
    for (auto i=0 ; i<10000000 ; i++) ;
  }
  
  GpioPort<GPIOC,11> GPort;
  GPort.SetAlternate();

  GpioPort<GPIOB, 1U> CSPort;
  CSPort.SetOutput();
  GpioPort<GPIOB,2U> DCPort;
  DCPort.SetOutput();
  GpioPort<GPIOC, 3U> RSTPort;
  RSTPort.SetOutput();
  GpioPort<GPIOC, 2U> BUSYPort;
  BUSYPort.SetInput();
  GpioPort<GPIOB, 2U> DINPort;
  DINPort.SetAlternate();
  GpioPort<GPIOB, 3U> CLKPort;
  CLKPort.SetAlternate();
  
  DisplayDriver<Spi<SPI2>> Display(CSPort,DCPort,RSTPort,BUSYPort); //,DINPort,CLKPort
  Display.Init();
  Display.ClearDisplay ();

  using namespace OsWrapper;
  Rtos::CreateThread(myButtonTask,"Button", ThreadPriority::normal); //Button
  //Rtos::CreateThread(myTask, "myTask", ThreadPriority::lowest);   //FIXME Чисто для примера
  Rtos::Start();  
  return 0;
};
