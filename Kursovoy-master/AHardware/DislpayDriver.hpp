#pragma once

#include "IGpio.hpp" // for Port's
#include "SPI.hpp" //for Button
#include "GpioPort.hpp" // for Port's

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
{
  
private:
  IGpio& cs;
  IGpio& dc;
  IGpio& rst;
  IGpio& busy;
  IGpio& din;
  IGpio& clk;  
public:
  
    int W = 400;
    int H = 300;
    
   DisplayDriver (IGpio& CS, IGpio& DC, IGpio& RST, IGpio& BUSY, IGpio& DIN, IGpio& CLK):cs(CS), dc(DC), rst(RST), busy(BUSY), din(DIN), clk(CLK)
  {
    
  dc.SetAlternate();
  cs.SetAlternate();
  rst.SetAlternate();
  busy.SetAlternate();
  din.SetAlternate();
  clk.SetAlternate();
  
  SPI::CR1::MSTR::Master::Set(); // SPI master
  SPI::CR1::DFF::Data8bit::Set(); //format 8bit
  SPI::CR1::CPOL::High::Set(); //cpol high
  SPI::CR1::CPHA::Phase2edge::Set(); //cpha setup 
  SPI::CR1::BR::PclockDiv2::Set(); //div2 baud rate
  SPI::CR1::LSBFIRST::MsbFisrt::Set(); //starhii bit first
  

  }
  
 void Init()  //init start
  {
    rst.Set(); //set rst in 1
    rst.Reset(); //set rst in 0
    rst.Set(); //set rst in 1
    SendCommand(ElinkDriverCommands::BoosterSoftStart);
    SendData(0x17);
    SendData(0x17);
    SendData(0x17); 
    SendCommand(ElinkDriverCommands::PowerOn);
    while(busy.IsSet()) 
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
      SendData(0xFF); //0xFF = BlackColor
    };
    SendCommand(ElinkDriverCommands::DataStartTransmission2);
    for (int i = 0; i < W / 8 * H; i ++) 
    {
      SendData(0xFF); //0xFF = BlackColor
    };    
  }
  
  void SendCommand(ElinkDriverCommands)
  {
    dc.Reset();
    cs.Reset();
    SPI::WriteByte();
    cs.Set();
  }
  
  void SendData(uint8_t data)
  {
    dc.Set();
    cs.Reset();
    SPI::WriteByte();
    cs.Set(); 
  }
  
  void Refresh ()
  {
    rst.Set(); //set rst in 1
    rst.Reset(); //set rst in 0
    rst.Set(); //set rst in 1
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
  


  
    
