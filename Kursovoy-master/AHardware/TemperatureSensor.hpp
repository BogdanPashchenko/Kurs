#pragma once

#include "IGpio.hpp" // for Port's
#include "GpioPort.hpp" // for Port's
#iclude "SMBus.hpp" //for SMBus-interface

enum class TemperatureCommands
{
MLX90614_ADDR_WRITE   0x00,
MLX90614_ADDR_READ    0x01,
MLX90614_RAM    0x00,
AMBIENT_TEMP    0x06,
OBJECT_TEMP     0x07,
};

template<typename SMBus> 

class TemperatureSensor

private:
  IGpio& sda;
  IGpio& scl;

TemperatureSensor (IGpio& SDA, IGpio& SCL):sda(SDA), scl(SCL)
   {
  I2C1::CR1::SMBUS::SmBusMode:: Set(); //Включение интерфейса SMBus. 
  I2C1::CR1::SMBTYPE::Host::Set(); //Тип устройства в режиме..
  I2C1::CR1::ACK::Acknowledge::Set(); //Разрешение отправки.
  I2C1::OAR1::ADDMODE:: Bits7::Set(); //7-разрядный режим адресации.
  I2C1::OAR1::ADD7::Set(0x01U);
  I2C1::CCR::F_S::FastMode::Set(); 
  I2C1::CCR::DUTY::DutyCycles_2::Set();
   }
   
   void Init();
   
  	SMBus_Start(); 
	SMBus_Send_Byte(MLX90614_ADDR_WRITE);
	SMBus_S_To_M_Ack();
	SMBus_Send_Byte(ambient_or_object);
	SMBus_S_To_M_Ack();
	SMBus_Start(); 
	SMBus_Send_Byte(MLX90614_ADDR_READ);
	SMBus_S_To_M_Ack();
	RxBuffer[0] = SMBus_Read_Byte();
	SMBus_M_To_S_Ack();
	RxBuffer[1] = SMBus_Read_Byte();
	SMBus_M_To_S_Ack();
	RxBuffer[2] = SMBus_Read_Byte();
	SMBus_M_To_S_Ack();
	SMBus_Stop();
	
	temp_data = RxBuffer[1]*256 + RxBuffer[0];	
	if(temp_data >= 0x8000)	   // if MSB bit is "1", this data is error 
	{
		return 0;
	}
	
	if(temp_data == 0)	 
	{
		return 0;
	}
	
	T = temp_data*0.02;
	if(T >= 273.15)	
	{
		return (T - 273.15);
	}
	else
	{
		return  -(273.15 - T);
	}		
}