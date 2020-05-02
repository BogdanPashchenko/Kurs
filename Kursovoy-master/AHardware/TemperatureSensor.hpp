#pragma once

#include "IGpio.hpp" // for Port's
#include "GpioPort.hpp" // for Port's
#iclude "SMBus.hpp" //for SMBus-interface


template<typename SMBUS> 

class TemperatureSensor
  {
private:
  
    static constexpr uint8_t Ram = 0x00U;
    static constexpr uint8_t ObjectTemperature = 0x07U;
    void WriteByte (uint_8t Byte) ;
    uint8_t ReadByte(uint8_t Byte);
    
public:
  
  float GetTemperautre()
    {
  float temperature = 0.0f;
  SMBUS:Start(); //Начало измерения 
  SMBUS:WriteByte(Ram | ObjectTemperature); //Команда записи и чтения температуры объекта
  SMBUS:WriteByte(ReadByte); //
  SMBUS:ReadByte(); //прочтение
  SMBUS::ReadByte() << 8U; //команда на запись 
  SMBUS:Stop();
    }
  
  void WriteByte (uint8_t Byte)
    {
    SMBUS:WriteByte(Byte);
    }
  
  uint8_t ReadByte (uint8_t Byte)
    {
    SMBUS:ReadByte(Byte);
    }
  };
    
                
         
    
   