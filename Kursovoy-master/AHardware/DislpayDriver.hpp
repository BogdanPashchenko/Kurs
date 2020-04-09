#pragma once

#include "IGpio.hpp"
#include "GpioPort.hpp" // for Port's
#include "gpiocregisters.hpp" //for GPIOC-registers
#include "SPI.hpp" //for Button


enum class ElinkDriverCommands
{
PanelSetting = 0x0,  
PowerOn = 0x04,
BoosterSoftStart = 0x06,
DataStartTransmission1 = 0x10,
DisplayRefresh = 0x12,
DataStartTransmission2 = 0x13,
VcomLut = 0x20,
W2wLut = 0x21,
B2wLut = 0x22,
W2bLut = 0x23,
B2bLut = 0x24,
};

  static constexpr unsigned char EPD_4IN2_lut_vcom0[] = {  
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };
  static constexpr unsigned char EPD_4IN2_lut_ww[] = {    //white white
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static constexpr unsigned char EPD_4IN2_lut_bw[] = {     //black white
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00   
};

static constexpr unsigned char EPD_4IN2_lut_wb[] = {  //white black
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

static constexpr unsigned char EPD_4IN2_lut_bb[] = {   //black black
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00   
};

template<typename SPI> 
class DisplayDriver:public IGpio

private:
  
  cspin IGpio&;
  dcpin IGpio&;
  rstpin IGpio&;
  busypin IGpio&;
  dinpin IGpio&;
  clkpin IGpio&;
  
public:

    static constexpr std::uint16_t WidthByte = (width % 8 == 0)? (width / 8 ): (width / 8 + 1);
    static constexpr std::uint16_t HeightByte = height;
    static constexpr Color foreground = Color::White ; //setup color 
    static constexpr Color background = Color::Black ; //setup color
      
 void DisplayDriver ()
  {
  GpioPort<GPIOC,1> DCPin;
  GpioPort<GPIOC,2> CSPin;
  GpioPort<GPIOC,3> RSTPin;
  GpioPort<GPIOC,4> BUSYPin;
  GpioPort<GPIOC,5> DINPin;
  GpioPort<GPIOC,6> CLKPin;
 
  DCPin.SetAlternative();
  CSPin.SetAlternative();
  RSTPin.SetAlternative();
  BUSYPin.SetAlternative();
  DINPin.SetAlternative();
  CLKPin.SetAlternative();
  
  SPI2::CR1::MSTR::Master::Set(); // SPI master
  SPI2::CR1::DFF::Data8bit::Set(); //format 8bit
  SPI2::CR1::CPOL::High::Set(); //cpol high
  SPI2::CR1::CPHA::Phase2edge::Set(); //cpha setup 
  SPI2::CR1::BR::PclockDiv2::Set(); //div2 baud rate
  SPI2::CR1::LSBFIRST::MsbFisrt::Set(); //starhii bit first
  
  SPI::Config(SPI2);
  }
  
 void Init()  //init start
  {
    RSTPin :: Set(); //set rst in 1
    RSTPin :: Reset(); //set rst in 0
    RSTPin :: Set(); //set rst in 1
    SendCommand(ElinkDriverCommands::BoosterSoftStart);
    SendData(0x17);
    SendData(0x17);
    SendData(0x17); 
    SendCommand(ElinkDriverCommands::PowerOn);
    while(BUSY == 0) 
    {
    }; 
    SendCommand(ElinkDriverCommands::PanelSetting);
    SendData(0x0F);
  }
        
  void ClearDisplay ()
  {
   
   SendCommand(ElinkDriverCommands::DataStartTransmission1);
    for (int i = 0; i < W / 8 * H; i ++)
    {
      SendData(0xFF);
    };
    SendCommand(ElinkDriverCommands::DataStartTransmission2);
    for (int i = 0; i < W / 8 * H; i ++) 
    {
      SendData(0xFF);
    };    
  }
  
  void SendCommand(ElinkDriverCommands)
  {
    DCPin::Reset();
    CSPin::Reset();
    SPI::WriteByte(command);
    CSPin::Set();
  }
  
  void SendData(uint8_t: data)
  {
    DCPin::Set();
    CSPin::Reset();
    SPI::WriteByte(data);
    CSPin::Set(); 
  }
  
  void Refresh ()
  {
    RSTPin::Set(); //set rst in 1
    DelayMs(200);
    RSTPin::Reset(); //set rst in 0
    DelayMs(200);
    RSTPin::Set(); //set rst in 1
    DelayMs(200);
  }
 
   void SetLut() 
  {
    unsigned int i;
    SendCommand(ElinkDriverCommands::VcomLut);
    for (i = 0; i < 44; i ++) 
    {
      SendData(EPD_4IN2_lut_vcom0[i]);
    }
    SendCommand(ElinkDriverCommands::W2wLut);
    for (i = 0; i < 42; i ++) 
    {
      SendData(EPD_4IN2_lut_ww[i]);
    }
    SendCommand(ElinkDriverCommands::B2wLut);
    for (i = 0; i < 42; i ++)
    {
      SendData(EPD_4IN2_lut_bw[i]);
    }
    SendCommand(ElinkDriverCommands::W2bLut);
    for (i = 0; i < 42; i ++) 
    {
      SendData(EPD_4IN2_lut_wb[i]);
    }
    SendCommand(ElinkDriverCommands::B2bLut);
    for (i = 0; i < 42; i ++) 
    {
      SendData(EPD_4IN2_lut_bb[i]);
    }    
  }
  
};
  


  
    
