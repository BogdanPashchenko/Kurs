#pragma once
#include "IUinits.hpp" // for IUnits 

class Fahrenheit:public IUnits
{
public:
float Conversation(float Value) override
{
return 9/5*Value+32.0F;
}
};

class Celsius:public IUnits
{
public:
float Conversation(float Value) override
{
return (Value*0.02F)-273.15F;
}
};
class Kelvin:public IUnits
{
public:
float Conversation(float Value) override
{
return Value*0.02F;
}
};