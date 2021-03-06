#pragma once

#include "IGpio.hpp" // for Port's
#include "SPI.hpp" //for Button
#include "GpioPort.hpp" // for Port's

enum class ElinkDriverCommands
{
PanelSetting = 0x0,  
PowerOff  = 0x02,
PowerOn = 0x04,
BoosterSoftStart = 0x06,
DisplayStartTransmission1 = 0x10,
DisplayRefresh = 0x12,
DisplayStartTransmission2 = 0x13,
VcomLut = 0x20,
W2wLut = 0x21,
B2wLut = 0x22,
W2bLut = 0x23,
B2bLut = 0x24,
PLL  = 0x30,
VcomDataIntervalSetting  = 0x50,
VCMDCSetting  = 0x82,
};

  static constexpr unsigned char EPD_4IN2_lut_vcom0[] = {  
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };
  static constexpr unsigned char EPD_4IN2_lut_ww[] = {    //white white
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static constexpr unsigned char EPD_4IN2_lut_bw[] = {     //black white
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00   
};

static constexpr unsigned char EPD_4IN2_lut_wb[] = {  //white black
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

static constexpr unsigned char EPD_4IN2_lut_bb[] = {   //black black
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00   
};

template<typename SPI> 
class DisplayDriver
{
  
private:
  IGpio& cs;
  IGpio& dc;
  IGpio& rst;
  IGpio& busy;

    
public:
  
    int W = 400;
    int H = 300;
    
   DisplayDriver (IGpio& CS, IGpio& DC, IGpio& RST, IGpio& BUSY):cs(CS), dc(DC), rst(RST), busy(BUSY)
   {
    
  //dc.SetOutput();
  //cs.SetOutput();
  //rst.SetOutput();
  //busy.SetInput();
  //din.SetAlternate();
  //clk.SetAlternate();
  
  SPI2::CR1::MSTR::Master::Set(); // SPI master
  SPI2::CR1::BIDIMODE::Unidirectional2Line::Set(); //2linii peredachi
  SPI2::CR1::DFF::Data8bit::Set(); //format 8bit
  SPI2::CR1::CPOL::High::Set(); //cpol high
  SPI2::CR1::CPHA::Phase2edge::Set(); //cpha setup  
  SPI2::CR1::SSM::NssSoftwareEnable::Set(); //ti net => want ssm and ssi
  SPI2::CR1::SSI::Value1::Set();
  SPI2::CR1::BR::PclockDiv2::Set(); 
  SPI2::CR1::LSBFIRST::MsbFisrt::Set(); //starhii bit first
  SPI2::CR1::CRCEN::CrcCalcDisable::Set() ;
  SPI2::CR1::SPE::Enable::Set(); //spi on

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
    SendCommand(ElinkDriverCommands::PowerOff);
    while(!busy.IsSet()) 
    {
      for (int i = 0; i< 100000; i++) {};  
    }; 
    SendCommand(ElinkDriverCommands::PowerOn);
    while(!busy.IsSet()) 
    {
      for (int i = 0; i< 100000; i++) {};
    }; 
    SendCommand(ElinkDriverCommands::PanelSetting);
    SendData(0x0F);
    SetLut();
    SendCommand(ElinkDriverCommands::PLL); // PLL setting
    SendData(0x3C); // 3A 100HZ   29 150Hz 39 200HZ	31 171HZ
    SendCommand (ElinkDriverCommands::VCMDCSetting);
    SendData(0x12); //Display Refresh(DRF)
    SendCommand (ElinkDriverCommands::VcomDataIntervalSetting);
  }
        
  void ClearDisplay ()
  {
   const std::uint8_t WhiteColor = 0xff;
   SendCommand(ElinkDriverCommands::DisplayStartTransmission1); 
    for (int i = 0; i < W / 8 * H; i ++)
    {
      SendData(WhiteColor); 
    };
    SendCommand(ElinkDriverCommands::DisplayStartTransmission2);
    for (int i = 0; i < W / 8 * H; i ++) 
    {
      SendData(WhiteColor); //0xFF = WhiteColor
    }
    Refresh();
  }
  
  void SendCommand(ElinkDriverCommands command)
  {
    dc.Reset();
    cs.Reset();
    SPI::WriteByte(static_cast<std::uint8_t>(command));
    cs.Set();
  }
  
  void SendData(std::uint8_t data )
  {
    dc.Set();
    cs.Reset();
    SPI::WriteByte(data);
    cs.Set(); 
  }
  
  void Reset ()
  {
    rst.Set(); //set rst in 1
    for (int i = 0; i < 1000000; i ++) {};
    rst.Reset(); //set rst in 0
    for (int i = 0; i < 1000000; i ++) {};
    rst.Set(); //set rst in 1
    for (int i = 0; i < 1000000; i ++) {};
  }
  
    void Refresh ()
  {
    SetLut();
   SendCommand(ElinkDriverCommands::DisplayRefresh);
   while(busy.IsSet())
   {
   };
  }
  
    void Clear() 
    {
    const std::uint8_t WhiteColor = 0xff;
    SendCommand(ElinkDriverCommands::DisplayStartTransmission1);
    for (int i = 0; i < W / 8 * H; i ++) 
    {
      SendData(WhiteColor);
    }
    SendCommand(ElinkDriverCommands::DisplayStartTransmission2);
    for (int i = 0; i < W / 8 * H; i ++) 
    {
      SendData(WhiteColor);
    }    
    Refresh();
  }
  
  void Display(uint8_t *buff, size_t lenght) 
  {
    if (buff != nullptr) 
    {
      SendCommand(ElinkDriverCommands :: DisplayStartTransmission2); 
      for (std::uint16_t j = 0; j < H; j++) 
      {
        for(std::uint16_t i = 0; i < W; i++) 
        {
        SendData(buff[i+j*W]);
        }
      } 
    };
    Refresh();
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
  


  
    
