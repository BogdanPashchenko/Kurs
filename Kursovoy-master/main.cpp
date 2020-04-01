#include "rtos.hpp"         // for Rtos
#include "event.hpp"        // for Event
#include "rccregisters.hpp" // for RCC
#include "GpioPort.hpp" // for Port's
#include "IGpio.hpp" //for Port's (virtual set)
#include "Button.hpp" //for Button
#include "ButtonTask.hpp" //for ButtonTask
#include "gpioaregisters.hpp" //for GPIOA-registers
#include "gpiocregisters.hpp" //for GPIOC-registers
#include "SPIconfig.hpp" //for SPI-int


std::uint32_t SystemCoreClock = 16'000'000U;

extern "C" {
int __low_level_init(void)
{
 
  RCC::APB2ENR::SPI4EN::Enable::Set(); //SPI k istochiky taktirovania
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
  

  return 1;
}
}

OsWrapper::Event event{500ms, 1}; //FIXME Чисто для примера
ButtonTask myButtonTask(event);
//MyTask myTask(event, UserButton::GetInstance()); //FIXME Чисто для примера


int main()
{
  GpioPort<GPIOC,13> GPort;
  GPort.SetAlternate();
  Spi Spi4;
  Spi4.OnSPI();
  using namespace OsWrapper;
  Rtos::CreateThread(myButtonTask,"Button", ThreadPriority::normal);
  //Rtos::CreateThread(myTask, "myTask", ThreadPriority::lowest);   //FIXME Чисто для примера
  Rtos::Start();

  return 0;
}
