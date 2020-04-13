#pragma once 

class IGpio
{
public:
  
    virtual void SetAlternate() const = 0 ;  
    virtual void SetInput() const = 0 ;  
    virtual void SetOutput() const = 0 ;
    virtual bool IsSet() const = 0 ;  
    virtual void Set() const = 0 ;  
    virtual void Reset() const = 0 ;  

};