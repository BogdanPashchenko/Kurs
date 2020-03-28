#pragma once
#include "IGpio.hpp" //for IGpio

template<IGpio & pin>
class Button
{
  public:
   bool IsPushed() const
    {
      return !pin.IsSet();  
    }
};