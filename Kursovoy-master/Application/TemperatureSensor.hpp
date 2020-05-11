#pragma once
#include "SMBus.hpp"


template<typename SMBUS> 

class TemperatureSensor
  {
private:
  
    static constexpr uint8_t Ram = 0x00U;
    static constexpr uint8_t ObjectTemperature = 0x07U;
    static constexpr uint8_t ReadByte = 0x01U;
    void WriteByte (uint8_t Byte)
    {
        SMBUS::WriteByte(Byte);
    };
    uint16_t ReadWord()
    { 
      uint16_t result = 0U;
      SMBUS::WriteByte(ReadByte); //
      result = SMBUS::ReadByte(); //прочтение
      result |= SMBUS::ReadByte() << 8U; //команда на запись   
      return result;
    } ;
    
public:
  
  float GetTemperautre()
    {
      SMBUS::Start(); //Начало измерения 
      SMBUS::WriteByte(Ram | ObjectTemperature); //Команда записи и чтения температуры объекта
      float result = static_cast<float>(ReadWord());
      SMBUS::Stop();
      return result;
    }
  };
    
                
         
    
   