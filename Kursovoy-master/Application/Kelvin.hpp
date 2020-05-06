#pragma once

#include "IUnits.hpp"

class Kelvin : public IUnits
{
private:
  const float k = 1.0F;
  const float b = 0.0F;
  static constexpr SusuStringView Name = SusuStringView("Kelvin");
  
  public:
  
   float Calculation(float Value) override
  {
    TemperatureKelvin = (k * Value + b)*0.02f;
  }
  
   const SusuStringView& GetName() const override
  {
    return Name;
  }
  
};