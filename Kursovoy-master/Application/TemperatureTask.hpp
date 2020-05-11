#pragma once
#include "thread.hpp" //for thread
#include "event.hpp"  //for OsWrapper event
#include "SMBus.hpp"
#include "TemperatureDirector.hpp"
#include "IUnits.hpp"
#include "susudefs.hpp"
#include "Kelvin.hpp"
#include "Celsuis.hpp"
#include "Fahrenheit.hpp"
#include "Filter.hpp"

class TemperatureTask : public OsWrapper::Thread<128>
{ 
public:
  void Execute() override;
  float GetTemperature() const;  
  TemperatureTask(OsWrapper::Event& event);

private:
  OsWrapper::Event& myEvent;
};