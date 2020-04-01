#pragma once

enum class FrameFormat
{
  Bits8,
  Bits16,
};

enum class FrameFormatBit 
{
  MSB,
  LSB,
};

template<typename SPIModule> 

class Spi
{
public:
  void OnSPI()
  {
    SPIModule::CR1::SPE::Enable::Set();
  }
  void ConfigData(FrameFormat frameformat)
  {
    switch (frameformat)
    {
      case FrameFormat::Bits8:
      SPIModule::CR1::DFF::Bits8::Set();
      break;
      case FrameFormat::Bits16:
      SPIModule::CR1::DFF::Bits16::Set();
      break;
    }
  }
  void OnlyTX()
  {
    SPIModule::CR1::BIDIOE::Enable::Set();
  }
    void ConfigMaster()
  {
    SPIModule::CR1::MSTR::Enable::Set();
  }
      void ConfigBit(FrameFormatBit frameformatbit)
  {
    switch (frameformatbit)
    {
      case FrameFormatBit::MSB:
      SPIModule::CR1::LSBFIRST::MSB::Set();
      break;
      case FrameFormatBit::LSB:
      SPIModule::CR1::LSBFIRST::LSB::Set();
      break;
    }
  }
} ;