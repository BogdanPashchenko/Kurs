#pragma once
#include "susudefs.hpp"

class IUnits
{
public:
  IUnits
  
   virtual float GetValue()
  {
    return Value;
  }
  virtual void Calculation(float Value) const = 0;
  
  virtual const SusuStringView& GetName() const = 0;
};