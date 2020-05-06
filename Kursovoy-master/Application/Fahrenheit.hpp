#pragma once

#include "IUnits.hpp"
#include "susudefs.hpp"

class Fahrenheit : public IUnits
{
private:
  const float k = 9/5;
  const float b = 32.0F;
  static constexpr SusuStringView Name = SusuStringView("Fahrenheit");
public:
  
    void Calculation(float Value)
  {
    TemperatureFahrenheit = k * Value + b;
  }
  
  const SusuStringView& GetName() const override
  {
    return Name;
  }
  
};
