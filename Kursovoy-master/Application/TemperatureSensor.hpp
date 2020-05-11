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
      result = SMBUS::ReadByte(); //���������
      result |= SMBUS::ReadByte() << 8U; //������� �� ������   
      return result;
    } ;
    
public:
  
  float GetTemperautre()
    {
      SMBUS::Start(); //������ ��������� 
      SMBUS::WriteByte(Ram | ObjectTemperature); //������� ������ � ������ ����������� �������
      float result = static_cast<float>(ReadWord());
      SMBUS::Stop();
      return result;
    }
  };
    
                
         
    
   