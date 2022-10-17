#include <Arduino.h>
#include <inttypes.h>
#include <Wire.h>
#include "VFDI2CMaster.h"
 byte _col;
 byte _row;
// byte _track;
 byte _highBytes;
 byte _midBytes;
 byte _lowBytes;
VFDI2CMaster::VFDI2CMaster(byte p){}
void VFDI2CMaster::setCursor(byte col,byte row){
_track++;
_col = col;
_row = row;
}
void VFDI2CMaster::Display(String s){
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(adr1);
  Wire.write(_track);
  Wire.write(_col);
  Wire.write(_row);
  Wire.write(s.c_str());
  Wire.endTransmission();
}
void VFDI2CMaster::Display(int number){
_lowBytes = number &0xFF;
_midBytes = number >> 8;
_highBytes = number >> 16;
Wire.beginTransmission(9); // transmit to device #9
Wire.write(adr2);
Wire.write(_track);
  Wire.write(_col);
 Wire.write(_row);
  Wire.write(_highBytes);
  Wire.write(_midBytes);
  Wire.write(_lowBytes);
  Wire.endTransmission(); 
}
void VFDI2CMaster::DisplayNumber_Row_2(uint8_t number){
  _highBytes = number >>8;
  _lowBytes = number &0xFF;
   Wire.beginTransmission(9); // transmit to device #9
  Wire.write(adr3);
 Wire.write(_track);
 Wire.write(_col);
  Wire.write(_row);
  Wire.write(_highBytes);
  Wire.write(_lowBytes);
  Wire.endTransmission();
}
void VFDI2CMaster::DisplayNumberGrid_15(uint8_t number){
  _highBytes = number >>8;
  _lowBytes = number &0xFF;
   Wire.beginTransmission(9); // transmit to device #9
  Wire.write(adr4);
  Wire.write(_track);
 Wire.write(_col);
  Wire.write(_row);
  Wire.write(_highBytes);
 Wire.write(_lowBytes);
Wire.endTransmission();
}
void VFDI2CMaster::DisplayIconGrid_15(String s){
   Wire.beginTransmission(9); // transmit to device #9
  Wire.write(adr5);
  Wire.write(_track);
 Wire.write(_col);
 Wire.write(_row);
  Wire.write(s.c_str());
  Wire.endTransmission();
}
void VFDI2CMaster::DisplayIconGrid_16(String s){
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(adr6);
  Wire.write(_track);
  Wire.write(_col);
  Wire.write(_row);
  Wire.write(s.c_str());
  Wire.endTransmission();
}
void VFDI2CMaster::DisplayIconGrid_20(String s){
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(adr7);
  Wire.write(_track);
  Wire.write(_col);
  Wire.write(_row);
  Wire.write(s.c_str());
  Wire.endTransmission();
}
void VFDI2CMaster::DisplayAlphaBet_Row_2(String s){
  Wire.beginTransmission(9);
  Wire.write(adr8);
  Wire.write(_track);
  Wire.write(_col);
  Wire.write(_row);
  Wire.write(s.c_str());
  Wire.endTransmission();
}
