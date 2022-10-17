#include <Arduino.h>
#include<Wire.h>
#include<Display.h>
byte adr[20];
byte col[20];
byte row;
String receiveString[20];
byte highByte[20];
byte midHighByte[20];
byte midLowByte[20];
byte lowByte[20];
int receiveNumers[20];
String receiveIcon_G_15[20];
String receiveIcon_G_16[20];
String receiveIcon_G_20[20];
uint8_t receiveNumbers_G_15[20];
uint8_t receiveNumberRow_2[20];
String receiveStringR0w_2[20];
uint8_t count_2 =0;
uint8_t count =0;
byte track=0;
//*****************************
void UpdatesDisplay(){
if(adr[count]==1){
 SetCours(col[count],row);
 Display(receiveString[count]);
}
if(adr[count] ==2){
SetCours(col[count],row);
Display(receiveNumers[count]);
}
if(adr[count]== 3){
  SetCours(col[count],row);
  DisplayRow_2_Number(receiveNumberRow_2[count]);
}
if(adr[count] ==4){
  SetCours(col[count],row);
  Display_G_15_Number(receiveNumbers_G_15[count]);
}
if(adr[count] == 5){
  SetCours(col[count],row);
  DisplayIconGrid_15(receiveIcon_G_15[count]);
}
if(adr[count] == 6){
  SetCours(col[count],row);
  DisplayIconGrid_16(receiveIcon_G_16[count]);
}
if(adr[count]==7){
  SetCours(col[count],row);
  DisplayIconGrid_20(receiveIcon_G_20[count]);
}
if(adr[count]==8){
  SetCours(col[count],row);
  DisplayAlphaBet_14SegmentsRow_2(receiveStringR0w_2[count]);
}

count++;
if(count >= track || count >= sizeof(col))count=0;

}
///*************************************
void receiveEventS(int byte) {
  receiveString[count_2]="";
  receiveIcon_G_15[count_2]="";
  receiveIcon_G_16[count_2]="";
  receiveIcon_G_20[count_2]="";
  receiveStringR0w_2[count_2]="";
  receiveNumers[count_2]=0;
  receiveNumberRow_2[count_2]=0;
  receiveNumbers_G_15[count_2]=0;
 adr[count_2] = Wire.read();
 track = Wire.read();
 col[count_2] = Wire.read();
 row = Wire.read();
 switch(adr[count_2]){
  case 1:
while (Wire.available())
 { 
  char c= Wire.read();
   receiveString[count_2] += c;
 }
 break;
 case 2:
 highByte[count_2] = Wire.read();
 midHighByte[count_2] = Wire.read();
 lowByte[count_2] = Wire.read();
 receiveNumers[count_2] = (highByte[count_2] << 16)+(midHighByte[count_2] << 8)+lowByte[count_2];
 break;
 case 3:
 highByte[count_2] = Wire.read();
 lowByte[count_2] = Wire.read();
receiveNumberRow_2[count_2] = (highByte[count_2] <<8)+lowByte[count_2];
 break;
 case 4:
 highByte[count_2] =Wire.read();
 lowByte[count_2] =Wire.read();
 receiveNumbers_G_15[count_2] = (highByte[count_2] << 8)+lowByte[count_2];
 break;
 case 5:
 while(Wire.available()){
  char c= Wire.read();
  receiveIcon_G_15[count_2] += c;
 }
 break;
 case 6:
 while (Wire.available())
 {
   char c =Wire.read();
   receiveIcon_G_16[count_2] += c;
 }
 break;
 case 7:
 while(Wire.available()){
  char c = Wire.read();
  receiveIcon_G_20[count_2] += c;
 }
 break;
 case 8:
 while(Wire.available()){
  char c = Wire.read();
  receiveStringR0w_2[count_2] +=c;
  break;
 }
 }
  count_2++;
if(count_2 >= track || count_2 >= sizeof(col)) count_2 = 0;
}

void setup() {
  // put your setup code here, to run once:
Wire.begin(9);
SPIinit();
pinMode(seg_latch,OUTPUT);
pinMode(seg_strob,OUTPUT);
pinMode(grid_latch,OUTPUT);
pinMode(grid_strob,OUTPUT);
ClearDisplay();
digitalWrite(seg_strob,HIGH);
digitalWrite(grid_strob,HIGH);
 Wire.onReceive(receiveEventS);
}

void loop() {
 UpdatesDisplay();
 
}
