#include "rtos.hpp"         // for Rtos
#include "event.hpp"        // for Event
#include "rccregisters.hpp" // for RCC
#include "GpioPort.hpp" // for Port's
#include "IGpio.hpp"
#include "Button.hpp"
#include "ButtonTask.hpp"
#include "gpioaregisters.hpp"

std::uint32_t SystemCoreClock = 16'000'000U;

extern "C" {
int __low_level_init(void)
{
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

OsWrapper::Event event{500ms, 1}; //FIXME ����� ��� �������
ButtonTask myButtonTask (event);
//MyTask myTask(event, UserButton::GetInstance()); //FIXME ����� ��� �������


int main()
{
  GpioPort<GPIOA,5> GPort;
  GPort.SetAlternate();
  using namespace OsWrapper;
  Rtos::CreateThread(myButtonTask, "Button", ThreadPriority::normal);
  //Rtos::CreateThread(myTask, "myTask", ThreadPriority::lowest);   //FIXME ����� ��� �������
  Rtos::Start();

  return 0;
}
