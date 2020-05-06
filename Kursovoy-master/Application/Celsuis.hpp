#pragma once
#include "IUnits.hpp"
#include "susudefs.hpp"

class Celsius : public IUnits
{
private: 
  const float k = 1.0F;
  const float b = -273.15F;
  static constexpr SusuStringView Name = SusuStringView("Celsius");

public:
    
   float Calculation(float Value) 
  {
    TemperatureCelsuis = (k * Value + b)*0.02f ;
  }
  
   const SusuStringView& GetName()
  {
    return Name;
  }

};