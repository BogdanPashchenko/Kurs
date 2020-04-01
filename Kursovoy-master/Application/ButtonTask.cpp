#include "ButtonTask.hpp"

void ButtonTask::Execute()
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

ButtonTask::ButtonTask(OsWrapper::Event& event): myEvent(event)
{
}