#pragma once
#include <cmath> //for USARTDIV
#include "usart2registers.hpp" //for registers


enum class SamplingMode {
    Mode16 ,
    Mode8 ,
  } ;

enum class Speed {
    Speed2400 ,
    Speed4800 ,
    Speed9600 ,
    Speed19200 ,
    Speed38400 ,
  } ;


template <typename USARTModule, uint32_t ClockSpeed>
class USART 
{
public:
  
    static void On() 
    {
    USARTModule::CR1::UE::Enable::Set() ; //????????? USART2
    USARTModule::CR1::TE::Enable::Set() ; //????????? ????????
  }
  
    static void SendData (const char* ptr, size_t size) 
  {
    assert(size > 0);
    for (size_t i = 0; i < size; i++)
    {
      SendByte(*ptr);
      ptr++ ;
    }
  }
  
    static void SendByte(uint8_t Byte) 
  {
    while (!USARTModule::SR::TXE::DataRegisterEmpty::IsSet()) 
    {
    } ;
    USARTModule::DR::Write(Byte) ;
  }
 
    inline static uint32_t over8 = 0 ;

    static void SetSamplingMode(SamplingMode samplingmode)
    {
      switch (samplingmode)
      {
      case SamplingMode::Mode16:
        USARTModule::CR1::OVER8::OVER16::Set() ;
        over8 = 0 ;
        break ;
      case SamplingMode::Mode8:
        USARTModule::CR1::OVER8::OVER8::Set() ;
        over8 = 1 ;
        break ;
      default:
        assert(false) ;
        break ;
      }
    }
    
    static void SetSpeed(Speed speed) 
    {
    uint32_t speednum ;
      switch (speed) {
      case Speed::Speed2400:
      speednum = 2400 ;
        break ;
      case Speed::Speed4800:
      speednum = 4800 ;
        break ;
      case Speed::Speed9600:
      speednum = 9600 ;
        break ;
      case Speed::Speed19200:
      speednum = 19200 ;
        break ;
      case Speed::Speed38400:
      speednum = 38400 ;
        break ;
      default:
        assert(false) ;
        break ;
      }      
      // 208 = 16000000/ (9600*8*(2-1)) ;
       uint32_t USARTDIVMANT = ClockSpeed/(speednum*8*(2-over8)) ;
       uint32_t USARTDIVFRACT = 16 * (ClockSpeed % (speednum*8*(2-over8)))/(speednum*8*(2-over8));
       USARTModule::BRR::Write((USARTDIVMANT<<4) | USARTDIVFRACT) ;  
  }
} ;