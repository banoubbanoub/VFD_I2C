#include<Arduino.h>
byte arrayNumber3[1];
byte* Array_3(char c){
    switch(c){
      case '<':
      arrayNumber3[0]=20;
      break;
      case '(':
      arrayNumber3[0] =20;
      break;
      case '#':
      arrayNumber3[0]=20;
      break;
      case 'W':
      arrayNumber3[0]=20;
      break;
      case 'a':
      arrayNumber3[0]=30;
      break;
      case 'c':
      arrayNumber3[0]=30;
      break;
      case 'd':
      arrayNumber3[0]=30;
      break;
      case 'e':
      arrayNumber3[0]=30;
      break;
      case 'L':
      arrayNumber3[0]=30;
      break;
      case 'B':
      arrayNumber3[0]=30;
      break;
      case 'E':
      arrayNumber3[0]=30;
      break;
      case 'G':
      arrayNumber3[0]=30;
      break;
      case 'Z':
      arrayNumber3[0]=30;
      break;
      case 'g':
      arrayNumber3[0]=30;
      break;
      case 't':
      arrayNumber3[0]=30;
      break;
      case '_':
      arrayNumber3[0]=30;
      break;
      //case 'C':
      //arrayNumber3[0]=30;
      //break;
      case 'R':
      arrayNumber3[0]=24;
      break;
      case 'H':
      arrayNumber3[0]=24;
      break;
      case 'M':
      arrayNumber3[0]=24;
      break;
      case 'N':
      arrayNumber3[0]=24;
      break;
      case 'K':
      arrayNumber3[0]=24;
      break;
      case 'A':
      arrayNumber3[0]=24;
      break;
      case 'Q':
      arrayNumber3[0]=24;
      break;
      case 'h':
      arrayNumber3[0]=24;
      break;
      case 'k':
      arrayNumber3[0]=24;
      break;
      case 'm':
      arrayNumber3[0]=24;
      break;
      case 'x':
      arrayNumber3[0]=24;
      break;
      case 'n':
      arrayNumber3[0]=24;
      break;
      case 'q':
      arrayNumber3[0]=24;
      break;
      case 'X':
      arrayNumber3[0]=24;
      break;
      case 'j':
      arrayNumber3[0]=18;
      break;
      case '?':
      arrayNumber3[0]=18;
      break;
      case 'Y':
      arrayNumber3[0]=18;
      break;
      case 'V':
      arrayNumber3[0]=18;
      break;
      case 'T':
      arrayNumber3[0]=18;
      break;
      case '}':
      arrayNumber3[0]=18;
      break;
      case 'f':
      arrayNumber3[0]=18;
      break;
      case 'v':
      arrayNumber3[0]=18;
      break;
      case 'D':
      arrayNumber3[0]=18;
      break;
      case 'J':
      arrayNumber3[0]=18;
      break;
      case '!':
      arrayNumber3[0]=18;
      break;
      case '$':
      arrayNumber3[0]=18;
      break;
     case 'b':
      arrayNumber3[0]=22;
      break;
      case 'l':
      arrayNumber3[0]=22;
      break;
      case 'w':
      arrayNumber3[0]=22;
      break;
      case 'o':
      arrayNumber3[0]=22;
      break;
      case 'u':
      arrayNumber3[0]=22;
      break;
      case 'z':
      arrayNumber3[0]=22;
      break;
      case 'I':
      arrayNumber3[0]=22;
      break;
      case 'O':
      arrayNumber3[0]=22;
      break;
      case 'S':
      arrayNumber3[0]=22;
      break;
      case ']':
      arrayNumber3[0]=22;
      break;
      case '[':
      arrayNumber3[0]=22;
      break;
      case '{':
      arrayNumber3[0]=22;
      break;
      case 'C':
      arrayNumber3[0]=22;
      break;
      case 's':
      arrayNumber3[0]=22;
      break;
      case 'i':
      arrayNumber3[0]=18;
      break;
      case '%':
      arrayNumber3[0]=28;
      break;
      case '&':
      arrayNumber3[0]=26;
      break;
      case '0':
      arrayNumber3[0]=22;
      break;
      case '1':
      arrayNumber3[0]=22;
      break;
      case '3':
      arrayNumber3[0]=22;
      break;
      case '5':
      arrayNumber3[0]=22;
      break;
      case '6':
      arrayNumber3[0]=22;
      break;
      case '8':
      arrayNumber3[0]=22;
      break;
      case '4':
      arrayNumber3[0]=20;
      break;
      case '2':
      arrayNumber3[0]=30;
      break;
      default:
      arrayNumber3[0]=16;
      break;
      case '9':
      arrayNumber3[0]=18;
      break;
      case ',':
      arrayNumber3[0]=2;
      break;
     // if(isspace(c)){arrayNumber3[0]=16;}
    }
    return arrayNumber3;
}