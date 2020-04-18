#pragma once
#include "IGpio.hpp" //for IGpio for class

template<typename GPIOModule, std::uint32_t pinNum> 
class GpioPort: public IGpio

{
public:
  void SetAlternate() const override
  {
    volatile auto value = GPIOModule::MODER::Get() ; //chitivaem znachenia moder
    value&= ~(3 << (pinNum * 2U)) ; //skinyli vse chto tam stoit 
    value|= (GPIOModule::MODER::FieldValues::Alternate::Value << (pinNum * 2U)) ; //setup new znachenie
    GPIOModule::MODER::Write(value); //comeback 
  }
  
  void SetInput() const override
  {
    volatile auto value = GPIOModule::MODER::Get() ; //chitivaem znachenia moder
    value &= ~(3 << (pinNum * 2U)) ; //skinyli vse chto tam stoit 
    value |= (GPIOModule::MODER::FieldValues::Input::Value << (pinNum * 2U)) ; //setup new znachenie
    GPIOModule::MODER::Write(value); //comeback 
  }
  
    void SetOutput() const override
  {
    volatile auto value = GPIOModule::MODER::Get() ; //chitivaem znachenia moder
    value &= ~(3 << (pinNum * 2U)) ; //skinyli vse chto tam stoit 
    value |= (GPIOModule::MODER::FieldValues::Output::Value << (pinNum * 2U)) ; //setup new znachenie
    GPIOModule::MODER::Write(value); //comeback 
  }
  
  bool IsSet() const override
  {
    return ((GPIOModule::IDR::Get() & (1 << pinNum)) !=0);
  }
  
    void Set() const override
    {
      auto value = GPIOModule::ODR::Get();
      value |= (1 << (pinNum));
      GPIOModule::ODR::Write(value);
    }

    void Reset() const override
    {
      auto value = GPIOModule::ODR::Get();
      value &=~(1 << (pinNum));
      GPIOModule::ODR::Write(value);
    }
};
