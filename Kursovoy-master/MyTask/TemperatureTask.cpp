#include "TemperatureTask.hpp"
#include "TemperatureDirector.hpp"
#include "TemperatureTask.hpp"

void TemperatureTask::Execute()
{
  for(;;)
  {
    if (userButton.IsPushed())
    {
      myEvent.Signal();
    }
    Sleep(300ms);
  }
}

TemperatureTask::TemperatureTask(OsWrapper::Event& event): myEvent(event)
{
}