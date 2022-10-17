#ifndef VFDI2CMaster_h
#define VFDI2CMaster_h
#include <inttypes.h>
#include <Arduino.h>
#include <Wire.h>
class VFDI2CMaster{
    public:
    VFDI2CMaster(byte);
  void setCursor(byte,byte);
  void Display(String);
  void Display(int);
  void DisplayNumber_Row_2(uint8_t);
  void DisplayAlphaBet_Row_2(String );
  void DisplayNumberGrid_15(uint8_t);
  void DisplayIconGrid_15(String);
  void DisplayIconGrid_16(String);
  void DisplayIconGrid_20(String);
 byte _track;
 private:

  byte adr1=0b0001;
  byte adr2=0b0010;
  byte adr3=0b0011;
  byte adr4=0b0100;
  byte adr5=0b0101;
  byte adr6=0b0110;
  byte adr7=0b0111;
  byte adr8=0b1000;
};
#endif