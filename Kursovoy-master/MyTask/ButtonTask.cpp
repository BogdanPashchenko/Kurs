#include "TaskButton.hpp"

void TaskButton::Execute()
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

TaskButton::TaskButton(OsWrapper::Event& event): myEvent(event)
{
}