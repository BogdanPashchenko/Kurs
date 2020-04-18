#pragma once

template<typename SPIModule> 

class Spi
{
  public:
  static void WriteData(uint8_t *data, size_t lenght) {
    //check lenght bolshe 0, if menshe ne rabotaet
    assert(lenght > 0);
    for (size_t i = 0; i < lenght; i++)
    {
      WriteByte(data[i]); //peredaem byte
    }
  }
  
  static void WriteByte (uint8_t Byte)
  {
    while (SPIModule::SR::TXE::TxBufferNotEmpty::IsSet()) //TXE - shows reception is completed or not, priem
    //has not yet completed - wait
    {
    }
    SPIModule::DR::Write(Byte) ; //send byte
    while (SPIModule::SR::BSY::Busy::IsSet()) //show whether it’s busy, if so, then we are waiting
    {
    }
  } 
};