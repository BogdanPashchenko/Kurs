#pragma once
#include "thread.hpp" //for thread
#include "event.hpp"  //for OsWrapper event
#include "GpioPort.hpp"  //for GpioPort
#include "gpiocregisters.hpp" //for gpiocregisters
#include "Button.hpp" //for Button
#include "IGpio.hpp" //for Button
#include "PinsConfig.hpp" //fpr UserButtonPin


class ButtonTask : public OsWrapper::Thread<128>
{ 
public:
  void Execute() override;
  ButtonTask(OsWrapper::Event& event);

private:
  Button<UserButtonPin> userButton;
  OsWrapper::Event& myEvent;
};