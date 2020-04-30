#pragma once


struct IDisplayDriver {
  virtual void Init() = 0 ;
  virtual void Clear() = 0 ;
  virtual void Display(uint8_t *buff, size_t lenght) = 0 ;
} ;