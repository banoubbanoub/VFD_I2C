#include<Arduino.h>
byte shiftRegisterBytes[4];


//*********************************
// digits data for a 5x7 dot matrix
// Note work only from grid 1 to 14
//*********************************
byte* Digits_35_DotMatrix(uint8_t number){
  
  switch (number)
  {
   case 0:
   //first byte
   shiftRegisterBytes[0] = 116;
   //second byte
   shiftRegisterBytes[1] = 103; 
   //third byte
   shiftRegisterBytes[2] = 92;
   //fourth byte
   shiftRegisterBytes[3] = 197;
   break;
   case 1:
    shiftRegisterBytes[0] = 35;
    shiftRegisterBytes[1] =8;
    shiftRegisterBytes[2]= 66;
    shiftRegisterBytes[3] = 17;
    break;
    case 2:
    shiftRegisterBytes[0] = 116;
    shiftRegisterBytes[1] = 66;
    shiftRegisterBytes[2] = 34;
    shiftRegisterBytes[3] = 35;
    break;
    case 3:
    shiftRegisterBytes[0] = 248;
    shiftRegisterBytes[1] = 136;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 197;
    break;
    case 4:
    shiftRegisterBytes[0]= 17;
    shiftRegisterBytes[1] = 149;
    shiftRegisterBytes[2] = 47;
    shiftRegisterBytes[3] = 136;
    break;
    case 5:
    shiftRegisterBytes[0] = 252;
    shiftRegisterBytes[1] = 60;
    shiftRegisterBytes[2] = 16;
    shiftRegisterBytes[3] = 197; 
    break;
    case 6:
    shiftRegisterBytes[0] =50; 
    shiftRegisterBytes[1] = 33;
    shiftRegisterBytes[2] = 232;
    shiftRegisterBytes[3] = 197;
   break;
   case 7:
   shiftRegisterBytes[0] = 248;
   shiftRegisterBytes[1] = 68;
   shiftRegisterBytes[2] = 68;
   shiftRegisterBytes[3] = 33;
   break;
   case 8:
   shiftRegisterBytes[0] = 116;
   shiftRegisterBytes[1] = 98; 
   shiftRegisterBytes[2] = 232;
   shiftRegisterBytes[3] = 197;
   break;
   case 9:
   shiftRegisterBytes[0] = 116;
   shiftRegisterBytes[1] = 98;
   shiftRegisterBytes[2] = 240;
   shiftRegisterBytes[3] =137;
   break;
  }

return shiftRegisterBytes;
}
//***************************************
// Characters data for a 5x7 dot matrix //Alphabet
// Note work only from grid 1 to 14
//***************************************
byte* Alphabet_35_DotMatrix(char c){
if(isspace(c)){
  shiftRegisterBytes[0]=0;
  shiftRegisterBytes[1]=0;
  shiftRegisterBytes[2]=0;
  shiftRegisterBytes[3] =0;
}
 switch(c){
  case 'A':
  //first byte
  shiftRegisterBytes[0] = 116;
  //second byte
  shiftRegisterBytes[1] = 99;
 //third byte
 shiftRegisterBytes[2] = 248;
 //fourth byte
 shiftRegisterBytes[3] = 198;
 break;
 case 'B':
  shiftRegisterBytes[0] = 244;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 232;
  shiftRegisterBytes[3] = 199;
  break;
  case 'C':
  shiftRegisterBytes[0] = 116;
  shiftRegisterBytes[1] = 97;
  shiftRegisterBytes[2] = 8;
  shiftRegisterBytes[3] = 69;
  break;
  case 'D':
  shiftRegisterBytes[0] = 228;
  shiftRegisterBytes[1] = 163;
  shiftRegisterBytes[2] = 24;
  shiftRegisterBytes[3] = 203;
  break;
  case 'E':
  shiftRegisterBytes[0] = 252;
  shiftRegisterBytes[1] = 33;
  shiftRegisterBytes[2] = 232;
  shiftRegisterBytes[3] = 67;
  break;
  case 'F':
  shiftRegisterBytes[0] = 252;
  shiftRegisterBytes[1] = 33;
  shiftRegisterBytes[2] = 232;
  shiftRegisterBytes[3] = 66;
  break;
  case 'G':
  shiftRegisterBytes[0] = 116;
  shiftRegisterBytes[1] = 97;
  shiftRegisterBytes[2] = 120;
  shiftRegisterBytes[3] = 197;
  break;
  case 'H':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 248;
  shiftRegisterBytes[3] = 198;//196
  break;
  case 'I':
  shiftRegisterBytes[0] = 113;
  shiftRegisterBytes[1] = 8;
  shiftRegisterBytes[2] = 66;
  shiftRegisterBytes[3] = 17;
  break;
  case 'J':
  shiftRegisterBytes[0] = 56;
  shiftRegisterBytes[1] = 132;
  shiftRegisterBytes[2] = 33;
  shiftRegisterBytes[3] = 73;
  break;
  case 'K':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 169;
  shiftRegisterBytes[2] = 138;
  shiftRegisterBytes[3] = 74;
  break;
  case 'L':
  shiftRegisterBytes[0] = 132;
  shiftRegisterBytes[1] = 33;
  shiftRegisterBytes[2] = 8;
  shiftRegisterBytes[3] = 67;
  break;
  case 'M':
  shiftRegisterBytes[0] = 142;
  shiftRegisterBytes[1] = 235;
  shiftRegisterBytes[2] = 88;
  shiftRegisterBytes[3] = 198;
  break;
  case 'N':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 115;
  shiftRegisterBytes[2] = 89;
  shiftRegisterBytes[3] = 198;
  break;
  case 'O':
  shiftRegisterBytes[0] = 116;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 24;
  shiftRegisterBytes[3] = 197;
  break;
  case 'P':
  shiftRegisterBytes[0] = 244;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 232;
  shiftRegisterBytes[3] = 66;
  break;
  case 'Q':
  shiftRegisterBytes[0] = 116;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 26;
  shiftRegisterBytes[3] = 201;
  break;
  case 'R':
  shiftRegisterBytes[0] = 244;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 234;
  shiftRegisterBytes[3] = 74;
  break;
  case 'S':
  shiftRegisterBytes[0] = 124;
  shiftRegisterBytes[1] = 32;
  shiftRegisterBytes[2] = 224;
  shiftRegisterBytes[3] = 135;
  break;
  case 'T':
  shiftRegisterBytes[0] = 249;
  shiftRegisterBytes[1] = 8;
  shiftRegisterBytes[2] = 66;
  shiftRegisterBytes[3] = 16;
  break;
  case 'U':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 24;
  shiftRegisterBytes[3] = 197;
  break;
  case 'V':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 24;
  shiftRegisterBytes[3] = 168;
  break;
  case 'W':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 99;
  shiftRegisterBytes[2] = 90;
  shiftRegisterBytes[3] = 213;
  break;
  case 'X':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 84;
  shiftRegisterBytes[2] = 69;
  shiftRegisterBytes[3] = 70;
  break;
  case 'Y':
  shiftRegisterBytes[0] = 140;
  shiftRegisterBytes[1] = 98;
  shiftRegisterBytes[2] = 162;
  shiftRegisterBytes[3] = 16;
  break;
  case 'Z':
  shiftRegisterBytes[0] = 248;
  shiftRegisterBytes[1] = 68;
  shiftRegisterBytes[2] = 68;
  shiftRegisterBytes[3] = 67;
  break;
  case '<':
  shiftRegisterBytes[0] = 17;
  shiftRegisterBytes[1] = 17;
  shiftRegisterBytes[2] = 4;
  shiftRegisterBytes[3] = 16;
  break;
  case '>':
  shiftRegisterBytes[0] = 65;
  shiftRegisterBytes[1] = 4;
  shiftRegisterBytes[2] = 17;
  shiftRegisterBytes[3] = 17;
  break;
   case '+':
   shiftRegisterBytes[0] = 1;
   shiftRegisterBytes[1] = 9;
   shiftRegisterBytes[2] = 242;
   shiftRegisterBytes[3] = 16;
   break;
   case '-':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 1;
   shiftRegisterBytes[2] = 240;
   shiftRegisterBytes[3] = 0;
   break;
   case '*':
   shiftRegisterBytes[0] = 4;
   shiftRegisterBytes[1] = 84;
   shiftRegisterBytes[2] = 69;
   shiftRegisterBytes[3] = 68;
   break;
   case '/':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 68;
   shiftRegisterBytes[2] = 68;
   shiftRegisterBytes[3] = 64;
   break;
   case '=':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 62;
   shiftRegisterBytes[2] = 15;
   shiftRegisterBytes[3] = 128;
   break;
   case ':':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 8;
   shiftRegisterBytes[2] = 2;
   shiftRegisterBytes[3] = 0;
   break;
   case 'a':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 28;
   shiftRegisterBytes[2] = 23;
   shiftRegisterBytes[3] = 197;
   break;
   case 'b':
   shiftRegisterBytes[0] = 132;
   shiftRegisterBytes[1] = 33;
   shiftRegisterBytes[2] = 232;
   shiftRegisterBytes[3] = 199;
   break;
   case 'c':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 31;
   shiftRegisterBytes[2] = 8;
   shiftRegisterBytes[3] = 65;
   break;
   case 'd':
   shiftRegisterBytes[0] =8 ;
   shiftRegisterBytes[1] = 66;
   shiftRegisterBytes[2] = 248;
   shiftRegisterBytes[3] = 197;
   break;
   case 'e':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 29;
   shiftRegisterBytes[2] = 31;
   shiftRegisterBytes[3] = 193;
   break;
   case 'f':
   shiftRegisterBytes[0] = 17;
   shiftRegisterBytes[1] = 72;
   shiftRegisterBytes[2] = 226;
   shiftRegisterBytes[3] = 16;
   break;
   case 'g':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 31;
   shiftRegisterBytes[2] = 23;
   shiftRegisterBytes[3] = 135;
   break;
   case 'h':
   shiftRegisterBytes[0] = 132;
   shiftRegisterBytes[1] = 33;
   shiftRegisterBytes[2] = 232;
   shiftRegisterBytes[3] = 198;
   break;
   case 'i':
   shiftRegisterBytes[0] = 1;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 66;
   shiftRegisterBytes[3] = 16;
   break;
   case 'j':
   shiftRegisterBytes[0] = 16;
   shiftRegisterBytes[1] = 4;
   shiftRegisterBytes[2] = 33;
   shiftRegisterBytes[3] = 73;
   break;
   case 'k':
   shiftRegisterBytes[0] = 66;
   shiftRegisterBytes[1] = 18;
   shiftRegisterBytes[2] = 166;
   shiftRegisterBytes[3] = 41;
   break;
   case 'l':
   shiftRegisterBytes[0] = 97;
   shiftRegisterBytes[1] = 8;
   shiftRegisterBytes[2] = 66;
   shiftRegisterBytes[3] = 17;
   break;
    case 'm':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 55;
   shiftRegisterBytes[2] = 90;
   shiftRegisterBytes[3] = 214;
   break;
   case 'n':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 45;
   shiftRegisterBytes[2] = 152;
   shiftRegisterBytes[3] = 198;
   break;
   case 'o':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 29;
   shiftRegisterBytes[2] = 24;
   shiftRegisterBytes[3] = 197;
   break;
   case 'p':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 61;
   shiftRegisterBytes[2] = 31;
   shiftRegisterBytes[3] = 66;
   break;
   case 'q':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 31;
   shiftRegisterBytes[2] = 23;
   shiftRegisterBytes[3] = 132;
   break;
   case 'r':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 45;
   shiftRegisterBytes[2] = 152;
   shiftRegisterBytes[3] = 66;
   break;
   case 's':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 31;
   shiftRegisterBytes[2] = 7;
   shiftRegisterBytes[3] = 7;
   break;
   case 't':
   shiftRegisterBytes[0] = 33;
   shiftRegisterBytes[1] = 62;
   shiftRegisterBytes[2] = 66;
   shiftRegisterBytes[3] = 20;
   break;
   case 'u':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 35;
   shiftRegisterBytes[2] = 24;
   shiftRegisterBytes[3] = 197;
   break;
   case 'v':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 35;
   shiftRegisterBytes[2] = 24;
   shiftRegisterBytes[3] = 168;
   break;
   case 'w':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 35;
   shiftRegisterBytes[2] = 26;
   shiftRegisterBytes[3] = 213;
   break;
   case 'x':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 34;
   shiftRegisterBytes[2] = 162;
   shiftRegisterBytes[3] = 42;
   break;
   case 'y':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 34;
   shiftRegisterBytes[2] = 162;
   shiftRegisterBytes[3] = 17;
   break;
   case 'z':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 62;
   shiftRegisterBytes[2] = 34;
   shiftRegisterBytes[3] = 35;
   break;
   case '(':
   shiftRegisterBytes[0] = 17;
   shiftRegisterBytes[1] = 16;
   shiftRegisterBytes[2] = 132;
   shiftRegisterBytes[3] = 16;
   break;
   case ')':
   shiftRegisterBytes[0] = 65;
   shiftRegisterBytes[1] = 4;
   shiftRegisterBytes[2] = 33;
   shiftRegisterBytes[3] = 17;
   break;
   case ',':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 6;
   shiftRegisterBytes[3] = 17;
   break;
   case '?':
   shiftRegisterBytes[0] = 116;
   shiftRegisterBytes[1] = 66;
   shiftRegisterBytes[2] = 34;
   shiftRegisterBytes[3] = 0;
   break;
   case '[':
   shiftRegisterBytes[0] = 114;
   shiftRegisterBytes[1] = 16;
   shiftRegisterBytes[2] = 132;
   shiftRegisterBytes[3] = 33;
   break;
   case ']':
   shiftRegisterBytes[0] = 112;
   shiftRegisterBytes[1] = 132;
   shiftRegisterBytes[2] = 33;
   shiftRegisterBytes[3] = 9;
   break;
   case '!':
   shiftRegisterBytes[0] = 33;
   shiftRegisterBytes[1] = 8;
   shiftRegisterBytes[2] = 66;
   shiftRegisterBytes[3] = 0;
   break;
   case '}':
   shiftRegisterBytes[0] = 96;
   shiftRegisterBytes[1] = 132;
   shiftRegisterBytes[2] = 17;
   shiftRegisterBytes[3] = 9;
   break;
   case '{':
   shiftRegisterBytes[0] = 50;
   shiftRegisterBytes[1] = 17;
   shiftRegisterBytes[2] = 4;
   shiftRegisterBytes[3] = 32;
   break;
   case '&':
   shiftRegisterBytes[0] = 100;
   shiftRegisterBytes[1] = 168;
   shiftRegisterBytes[2] = 138;
   shiftRegisterBytes[3] = 201;
   break;
   case '#':
   shiftRegisterBytes[0] = 82;
   shiftRegisterBytes[1] = 190;
   shiftRegisterBytes[2] = 175;
   shiftRegisterBytes[3] = 169;
   break;
   case '$':
   shiftRegisterBytes[0] = 35;
   shiftRegisterBytes[1] = 232;
   shiftRegisterBytes[2] = 226;
   shiftRegisterBytes[3] = 248;
   break;
   case '%':
   shiftRegisterBytes[0] = 198;
   shiftRegisterBytes[1] = 68;
   shiftRegisterBytes[2] = 68;
   shiftRegisterBytes[3] = 76;
   break;
   case '_':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 3;
   break;
   /*
   case '.':
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 49;
   break;
   */
}

 return shiftRegisterBytes;
}
//**************************
// Alphabet_14Segments lift hand digit
// work only from grid 16 to 19 row 2
//******************************
byte* Alphabet_14Segments_L(char c){
if(isspace(c)){
  shiftRegisterBytes[0]=0;
  shiftRegisterBytes[1]=0;
  shiftRegisterBytes[2]=0;
  shiftRegisterBytes[3] =0;
}
 switch(c){
  case 'a':
 shiftRegisterBytes[0]=32;
 shiftRegisterBytes[1]=37;
 shiftRegisterBytes[2]=32;
 shiftRegisterBytes[3]=40;
 break;
 case 'b':
 shiftRegisterBytes[0]=160;
 shiftRegisterBytes[1]=37;
 shiftRegisterBytes[2]=32;
 shiftRegisterBytes[3]=0;
 break;
 case 'c':
 shiftRegisterBytes[0]=160;
 shiftRegisterBytes[1]=0;
 shiftRegisterBytes[2]=32;
 shiftRegisterBytes[3]=8;
 break;
 case 'd':
 shiftRegisterBytes[0]=160;
 shiftRegisterBytes[1]=37;
 shiftRegisterBytes[2]=1;
 shiftRegisterBytes[3]=32;
 break;
 case 'e':
 shiftRegisterBytes[0]=160;
 shiftRegisterBytes[1]=4;
 shiftRegisterBytes[2]=32;
 shiftRegisterBytes[3]=8;
 break;
 case 'f':
 shiftRegisterBytes[0]=32;
 shiftRegisterBytes[1]=4;
 shiftRegisterBytes[2]=32;
 shiftRegisterBytes[3]=0;
 break;
  case 'p':
  shiftRegisterBytes[0]=32;
  shiftRegisterBytes[1]=5;
  shiftRegisterBytes[2]=32;
  shiftRegisterBytes[3]=40;
  break;
 case 'm':
 shiftRegisterBytes[0]=32;
 shiftRegisterBytes[1]=32;
 shiftRegisterBytes[2]=34;
 shiftRegisterBytes[3]=40;
 break;
 
 }
 return shiftRegisterBytes;
}
//****************************
// alphabet 14 segments right hand digit only row 2 
//from grid 16 to 19
//***************************************
byte* Alphabet_14Segments_R(char c){
if(isspace(c)){
  shiftRegisterBytes[0]=0;
  shiftRegisterBytes[1]=0;
  shiftRegisterBytes[2]=0;
  shiftRegisterBytes[3] =0;
}
 switch(c){
  case 'a':
  shiftRegisterBytes[0]=16;
  shiftRegisterBytes[1]=18;
  shiftRegisterBytes[2]=144;
  shiftRegisterBytes[3]=20;
  break;
  case 'b':
  shiftRegisterBytes[0]=80;
  shiftRegisterBytes[1]=18;
  shiftRegisterBytes[2]=144;
  shiftRegisterBytes[3]=0;
  break;
  case 'c':
  shiftRegisterBytes[0]=80;
  shiftRegisterBytes[1]=0;
  shiftRegisterBytes[2]=16;
  shiftRegisterBytes[3]=4;
  break;
  case 'd':
  shiftRegisterBytes[0]=80;
  shiftRegisterBytes[1]=18;
  shiftRegisterBytes[2]=128;
  shiftRegisterBytes[3]=16;
  break;
  case 'e':
  shiftRegisterBytes[0]=80;
  shiftRegisterBytes[1]=2;
  shiftRegisterBytes[2]=144;
  shiftRegisterBytes[3]=4;
  break;
  case 'f':
  shiftRegisterBytes[0]=16;
  shiftRegisterBytes[1]=2;
  shiftRegisterBytes[2]=144;
  shiftRegisterBytes[3]=0;
  break;
  case 'p':
  shiftRegisterBytes[0]=16;
  shiftRegisterBytes[1]=2;
  shiftRegisterBytes[2]=144;
  shiftRegisterBytes[3]=20;
  break;
  case 'm':
  shiftRegisterBytes[0]=0;
  shiftRegisterBytes[1]=0;
  shiftRegisterBytes[2]=17;
  shiftRegisterBytes[3]=20;
  break;
 // default:
 // shiftRegisterBytes[0]=80;
 // shiftRegisterBytes[1]=16;
 // shiftRegisterBytes[2]=16;
 // shiftRegisterBytes[3]=20;
 // break;

 }
 return shiftRegisterBytes;
}
//***************************************
// digits data for 14 segments 9 digits
// Note it work only from grid 16 to grid 20
// Note for the left hand digit only from grid 16 to 20
//****************************************************
byte* Number_14SegmentsDigit_1L(uint8_t number){
  switch (number)
  {
  case 0:
    shiftRegisterBytes[0] = 160;
    shiftRegisterBytes[1] = 32;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 40;
    break;
  case 1:
    shiftRegisterBytes[0] = 32;
    shiftRegisterBytes[1] = 0;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 0;
    break;
    case 2:
    shiftRegisterBytes[0] = 160;
    shiftRegisterBytes[1] = 5;
    shiftRegisterBytes[2] = 0;
    shiftRegisterBytes[3] = 40;
    break;
    case 3:
    shiftRegisterBytes[0] = 128;
    shiftRegisterBytes[1] = 37;
    shiftRegisterBytes[2] = 0;
    shiftRegisterBytes[3] = 40;
    break;
    case 4:
    shiftRegisterBytes[0] = 0;
    shiftRegisterBytes[1] = 37;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 32;
    break;
    case 5:
    shiftRegisterBytes[0] = 128;
    shiftRegisterBytes[1] = 37;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 8;
    break;
    case 6:
    shiftRegisterBytes[0] = 160;
    shiftRegisterBytes[1] = 37;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 8;
    break;
    case 7:
    shiftRegisterBytes[0] = 0;
    shiftRegisterBytes[1] = 32;
    shiftRegisterBytes[2] = 0;
    shiftRegisterBytes[3] = 40;
    break;
    case 8:
    shiftRegisterBytes[0] = 160;
    shiftRegisterBytes[1] = 37;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 40;
    break;
    case 9:
    shiftRegisterBytes[0] = 0;
    shiftRegisterBytes[1] = 37;
    shiftRegisterBytes[2] = 32;
    shiftRegisterBytes[3] = 40;
    break;

  }

 return shiftRegisterBytes;
}
//***************************************
// Numbers data for 14 segments 9 digits
// Note it work only from grid 16 to grid 20
// Note for the righ hand digit only from grid 16 to 20
//****************************************************
byte* Number_14SegmentsDigit_2R(uint8_t number){
 
  switch (number)
  {
  case 0:
    shiftRegisterBytes[0] = 80;
    shiftRegisterBytes[1] = 16;
    shiftRegisterBytes[2] = 16;
    shiftRegisterBytes[3] = 20;
    break;
  case 1:
    shiftRegisterBytes[0] = 16;//16
    shiftRegisterBytes[1] = 0;
    shiftRegisterBytes[2] = 16;//16
    shiftRegisterBytes[3] = 0;
    break;
    case 2:
    shiftRegisterBytes[0] = 80;
    shiftRegisterBytes[1] = 2;
    shiftRegisterBytes[2] = 128;
    shiftRegisterBytes[3] = 20;
    break;
    case 3:
    shiftRegisterBytes[0] = 64;
    shiftRegisterBytes[1] = 18;
    shiftRegisterBytes[2] = 128;
    shiftRegisterBytes[3] = 20;
    break;
    case 4:
    shiftRegisterBytes[0] = 0;
    shiftRegisterBytes[1] = 18;
    shiftRegisterBytes[2] = 144;
    shiftRegisterBytes[3] = 16;
    break;
    case 5:
    shiftRegisterBytes[0] = 64;
    shiftRegisterBytes[1] = 18;
    shiftRegisterBytes[2] = 144;
    shiftRegisterBytes[3] = 4;
    break;
    case 6:
    shiftRegisterBytes[0] = 80;
    shiftRegisterBytes[1] = 18;
    shiftRegisterBytes[2] = 144;
    shiftRegisterBytes[3] = 4;
    break;
    case 7:
    shiftRegisterBytes[0] = 0;
    shiftRegisterBytes[1] = 16;
    shiftRegisterBytes[2] = 0;
    shiftRegisterBytes[3] = 20;
    break;
    case 8:
    shiftRegisterBytes[0] = 80;
    shiftRegisterBytes[1] = 18;
    shiftRegisterBytes[2] = 144;
    shiftRegisterBytes[3] = 20;
    break;
    case 9:
    shiftRegisterBytes[0] = 0;
    shiftRegisterBytes[1] = 18;
    shiftRegisterBytes[2] = 144;
    shiftRegisterBytes[3] = 20;
    break;

  }

 return shiftRegisterBytes;
}
//*****************************************
// digits data for 7 segments one digit
// note work only in right hand digit in gird 15 only
//****************************************************
byte* Number_8SegmentsGird_15R(uint8_t number){

  switch(number){
  case 0:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 29;
  shiftRegisterBytes[2] = 192;
  shiftRegisterBytes[3] = 0;
  break;
  case 1:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 4;
  shiftRegisterBytes[2] = 128;
  shiftRegisterBytes[3] = 0;
  break;
  case 2:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 26;
  shiftRegisterBytes[2] = 192;
  shiftRegisterBytes[3] =0;
  break;
  case 3:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 22;
  shiftRegisterBytes[2] = 192;
  shiftRegisterBytes[3] = 0;
  break;
  case 4:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 7;
  shiftRegisterBytes[2] = 128;
  shiftRegisterBytes[3] = 0;
  break;
  case 5:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 23;
  shiftRegisterBytes[2] = 64;
  shiftRegisterBytes[3] = 0;
  break;
  case 6:
  shiftRegisterBytes[0] =0;
  shiftRegisterBytes[1] = 31;
  shiftRegisterBytes[2] = 64;
  shiftRegisterBytes[3] = 0;
  break;
  case 7:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 4;
  shiftRegisterBytes[2] = 192;
  shiftRegisterBytes[3] = 0;
  break; 
  case 8:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 31;
  shiftRegisterBytes[2] = 192;
  shiftRegisterBytes[3] = 0;
  break;
  case 9:
  shiftRegisterBytes[0] = 0;
  shiftRegisterBytes[1] = 7;
  shiftRegisterBytes[2] = 192;
  shiftRegisterBytes[3] = 0;
  break;
  }

 return shiftRegisterBytes;
}
//*****************************************
// digits data for 7 segments one digit
// note work only in left hand digit in gird 15 only
//****************************************************
byte* Number_8SegmentsGird_15L(uint8_t number){

  switch(number){
  case 0:
  shiftRegisterBytes[0] = 29;
  shiftRegisterBytes[1] = 192;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 1:
  shiftRegisterBytes[0] = 4;
  shiftRegisterBytes[1] = 128;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 2:
  shiftRegisterBytes[0] = 26;
  shiftRegisterBytes[1] = 192;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] =0;
  break;
  case 3:
  shiftRegisterBytes[0] = 22;
  shiftRegisterBytes[1] = 192;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 4:
  shiftRegisterBytes[0] = 7;
  shiftRegisterBytes[1] = 128;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 5:
  shiftRegisterBytes[0] = 23;
  shiftRegisterBytes[1] = 64;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 6:
  shiftRegisterBytes[0] =31;
  shiftRegisterBytes[1] = 64;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 7:
  shiftRegisterBytes[0] = 4;
  shiftRegisterBytes[1] = 192;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break; 
  case 8:
  shiftRegisterBytes[0] = 31;
  shiftRegisterBytes[1] = 192;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  case 9:
  shiftRegisterBytes[0] = 7;
  shiftRegisterBytes[1] = 192;
  shiftRegisterBytes[2] = 0;
  shiftRegisterBytes[3] = 0;
  break;
  }
return shiftRegisterBytes;
}
//**********************************
// Icon data work in gird 15 only
//**********************************
byte* Icon_Gired_15(String iconp){ // only work in grid number 15
 
  
  // VOL icon
 if(iconp == "vol"){
   shiftRegisterBytes[0] = 128;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
 }

  //mute icon
  if(iconp == "mute"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 32;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
  }

   // .db icon
  if(iconp == "db"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 32;
   shiftRegisterBytes[3] = 0;
  }
  
  // - 
  if(iconp =="-"){
   shiftRegisterBytes[0] = 64;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
  }

  // ::.
  if(iconp == "::"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 2;
   shiftRegisterBytes[3] = 0;
  }
 // Addaptive drc icon
   if(iconp =="addaptive"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 1;
   shiftRegisterBytes[3] = 0;
   }
 // virtual icon
  if(iconp == "virtual"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 128;
  }
//SL Icon
  if(iconp == "sl"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 64;
  }
 // SW icon
  if(iconp == "sw"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 32;
  }
 // SR icon
  if(iconp =="sr"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 16;
  }
 // SBL icon
   if(iconp == "sbl"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 8;
   }
 // SB icon
  if(iconp == "sb"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 4;
  }
// SBR Icon
   if(iconp == "sbr"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 2;
   }
// number one in grid 15
   if(iconp == "1"){
   shiftRegisterBytes[0] = 32;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
   }
return shiftRegisterBytes;
}
//*****************************
// on digit grid 15 
//*****************************
 byte* Fan_Grid_15(){

 // switch(f){
   //case 1:
   shiftRegisterBytes[0] =0;
   shiftRegisterBytes[1] = 0 ;
   shiftRegisterBytes[2] = 28;
   shiftRegisterBytes[3] = 0;
 //  break;
  //}

 return shiftRegisterBytes;
}
//***********************************
// Icon data work in grid 16 only
//***********************************
byte* Icon_Gird_16(String iconp){ // only work in grid number 16

 
   //WIFI icon
   if(iconp == "wifi"){
   shiftRegisterBytes[0] = 21;
   shiftRegisterBytes[1] = 64;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
   }
 //bluetooth icon
 if(iconp =="bluetooth"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 16;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
 }
    //ZONE 2 A icon
    if(iconp =="zone2A"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 8;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
    }

    //Zone 3 B icon
    if(iconp == "zone3B"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 2;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
    }
  // Sleep icon
  if(iconp =="sleep"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 1;
   shiftRegisterBytes[3] = 0;
  }
    //party icon
    if(iconp =="party"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 64;
    }
    // Tuned icon
    if(iconp=="tuned"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 16;
    }
    // Stereo icon
    if(iconp == "stereo"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 4;
    }
    //Enhancer icon
    if(iconp == "enhancer"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 2;
    }
    // Cinema DSP icon
    if(iconp == "cinema"){
   shiftRegisterBytes[0] = 64;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
    }
  
return shiftRegisterBytes;
}
//*********************************
// icon in grid 20
// work only in grid 20
//************************************
byte* Icon_Grid_20(String icon){

  // HDMI icon
  if(icon =="HDMI"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 8;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
  }
    // Charge icon
    if(icon =="charge"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 64;
   shiftRegisterBytes[3] = 0;
    }
  // squar 1
  if(icon == "squar1"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 1;
  }
   // squar 2
   if(icon == "squar2"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 2;
   }
   
    // OUT icon
    if(icon == "OUT"){
   shiftRegisterBytes[0] = 0;
   shiftRegisterBytes[1] = 0;
   shiftRegisterBytes[2] = 0;
   shiftRegisterBytes[3] = 0;
    }
   
return shiftRegisterBytes;

}
