#pragma once
#include "IUnits.hpp"
#include "susudefs.hpp"

class Celsius : public IUnits
{
private: 
  const float k = 1.0F;
  const float b = 0.0F;
  float Value = 0.0F;
  static constexpr SusuStringView Name = SusuStringView("Celsius");

public:
  
  float GetValue()
  {
    return Value;
  }
  
   void Calculation(float Temper) override
  {
    Value = (k * Temper + b)*0.02f - 273.15f;
  }
  
   const SusuStringView& GetName() const override
  {
    return Name;
  }

};