#pragma once
#include "gpioaregisters.hpp" 

template<typename GPIOModule, std::uint32_t pinNum> //T = GpioModule
class GpioPort
{
public:
  void SetAlternate()
  {
    volatile auto value = GPIOModule::MODER::Get() ; //chitivaem znachenia moder
    value&= ~(3 << (pinNum * 2U)) ; //skinyli vse chto tam stoit 
    value|= (GPIOModule::MODER::FieldValues::Alternate::Value << (pinNum * 2U)) ; //setup new znachenie
    GPIOModule::MODER::Write(value); //comeback 
  }
  
  void SetInput()
  {
    volatile auto value = GPIOModule::MODER::Get() ; //chitivaem znachenia moder
    value &= ~(3 << (pinNum * 2U)) ; //skinyli vse chto tam stoit 
    value |= (GPIOModule::MODER::FieldValues::Input::Value << (pinNum * 2U)) ; //setup new znachenie
    GPIOModule::MODER::Write(value); //comeback 
  }
  bool IsSet()
  {
    return !GPIOModule::IDR::IsSet();
  }
};