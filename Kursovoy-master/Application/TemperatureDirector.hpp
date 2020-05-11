#pragma once
#include "Filter.hpp"
#include "TemperatureSensor.hpp"

class TemperatureDirector
{
private:
  
  TemperatureSensor& tempsens;
  Filter& filt;
  
public:
  
    void Temperature (TemperatureSensor& TempSens, Filter& Filt): tempsens(TempSens), filt(Filt)
      {
      }
  
    void Calcute()
      {
        float Value = tempsens.GetTemperautre();
        filt.Update(Value);  
      }
  
  float GetOldFilterValue()
    {
      return filt.GetOldFilteredValue();  
    }
};
