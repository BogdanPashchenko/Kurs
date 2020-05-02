#pragma once

#include "IUnits.hpp"
#include "susudefs.hpp"

class Fahrenheit : public IUnits
{
private:
  const float k = 9/5;
  const float b = 32.0F;
  float Value = 0.0F;
  static constexpr SusuStringView Name = SusuStringView("Fahrenheit");
public:
  
  float GetValue()
  {
    return Value;
  }
  
    void Calculation(float Temper)
  {
    Value = k * Temper + b;
  }
  
  const SusuStringView& GetName() const override
  {
    return Name;
  }
  
};
