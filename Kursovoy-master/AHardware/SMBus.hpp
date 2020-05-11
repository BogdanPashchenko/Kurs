#pragma once

template<typename SMBusModule> 
class SMBus
{
public:
  static void Start ()
  {

  }
  static void Stop ()
  {

  }
  static void WriteByte (uint8_t Byte)
  {
    while (SMBusModule::SR1::TxE::DataNotEmply::IsSet()) //TxE - shows reception is completed or not, priem
    //has not yet completed - wait
    {
    }
    SMBusModule::DR::Write(Byte) ; //write byte
    while (SMBusModule::SR2::BUSY::Busy::IsSet()) //show whether it’s busy, if so, then we are waiting
    {
    }
  }
  
  static uint8_t ReadByte ()
  {
    while (SMBusModule::SR1::RxNE::DataRegisterNotEmply::IsSet()) 
    {
    }
    return SMBusModule::DR::Get();
  }
};