#pragma once

template<auto& pin>
class Button
{
  public:
   bool IsPushed() const
    {
      return !pin.IsSet();  
    }
};