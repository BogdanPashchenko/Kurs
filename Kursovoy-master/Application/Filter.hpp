#pragma once

#include <cmath> //for exp

class Filter
{
  private:
    
  float OldFilteredValue = 0.0f;
  static constexpr float dt = 100.0f;
  static constexpr float RC = 1000.0f;
  inline static const float tay = 1.0f - exp(-dt/RC);
    
  public:
  float Update(float Value)
  {
    float FilteredValue = OldFilteredValue + (Value - OldFilteredValue)*tay;
    OldFilteredValue = FilteredValue;
    return FilteredValue;
  }
  
  float GetOldFilteredValue (float Value)
  {
    float FilteredValue = OldFilteredValue + (Value - OldFilteredValue)*tay;
    OldFilteredValue = FilteredValue;
    return FilteredValue;
  }
  
};