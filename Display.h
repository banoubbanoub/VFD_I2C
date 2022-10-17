#include<Arduino.h>
#include<DisplayData.h>
#include<SPI.h>
#include<ArrayNumber_3.h>
#define seg_latch 7
#define seg_strob  6
#define grid_latch 1
#define grid_strob 0
byte segmentsArray[4];
byte gridArray[4];
uint8_t gridNumber;
void ClearDisplay(){
  digitalWrite(seg_strob,HIGH);
  digitalWrite(seg_latch,HIGH);
 digitalWrite(grid_strob,HIGH);
 digitalWrite(grid_latch,HIGH);
  digitalWrite(seg_latch,LOW);
  digitalWrite(grid_latch,LOW);
  digitalWrite(seg_strob,LOW);
  digitalWrite(grid_strob,LOW);
}


//*************************************
// data for Girds
//****************
byte gridsData[20][4] ={
  // Gird number
  //G 1        G2         G3            G4       G5        G6        G7          G8         G9       G10
  {128,0,0,0},{64,0,0,0},{32,0,0,0},{16,0,0,0},{8,0,0,0},{4,0,0,0},{2,0,0,0},{1,0,0,0},{0,128,0,0},{0,64,0,0},
  // G11        G12       G13          G14      G15       G16         G17        G18       G19         G20     
  {0,32,0,0},{0,16,0,0},{0,8,0,0},{0,4,0,0},{0,2,0,0},{0,1,0,0},{0,0,128,0},{0,0,64,0},{0,0,32,0},{0,0,16,0}};
//*****************************
void SPIinit(){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
  SPI.begin();

}
String rS;
char rc;
uint8_t q;


////***********************************
// grids data method
//*******************************
byte* GridsData(uint8_t gridNumber){
  for(uint8_t x=0; x< 4;x++){
   gridArray[x] = gridsData[gridNumber][x];

   if(q==1 && gridNumber <= 13){
    gridArray[3] = Array_3(rc)[0];
   }
   if(q ==2 && gridNumber >=14&& gridNumber!=19){
    gridArray[3] = 0;
   }
  if(q==2&&gridNumber==19){
    gridArray[3]=2;
  }
  }
    return gridArray;
}
 void SetCours(uint8_t col,uint8_t row){
  q=row;
 switch (row)
 {
 case 1:
  if(col > sizeof(gridsData)-6 || col < sizeof(gridsData)) gridNumber = 13;
  break;
  case 2:
  if(col > sizeof(gridsData) || col < sizeof(gridsData)-6)gridNumber = 19 ;
   break;
 }
gridNumber = col;
}
//****************************
// Method to display intger
// note from grid 1 to 14 only row 1
//******************************
void Display(int number){
SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
uint8_t gridnum=0;
uint8_t z= number;
String num = String(number);
uint8_t a[2] ={(number / 10)%10,(number %10)};
uint8_t b[3] ={(number /100)%10,(number /10 )%10,(number % 10)};
uint8_t c[4] ={(number /1000),(number /100)%10,(number /10)%10,(number %10)};
uint8_t d[5] = {(number /10000)%10,(number /1000)%10,(number /100)%10,(number /10)%10,(number %10)};
uint8_t e[6] = {(number/100000)%10,(number /10000)%10,(number /1000)%10,(number /100)%10,(number /10)%10,(number %10)};
uint8_t f[7] = {(number/1000000)%10,(number/100000)%10,(number /10000)%10,(number /1000)%10,(number /100)%10,(number /10)%10,(number %10)};
for(uint8_t x=0;x <  num.length() ;x++){
  rc = num.charAt(x);
  if(num.length() ==2){
    z = a[x];
  }
  if(num.length() ==3){
    z = b[x];
  }
  if(num.length() == 4){
    z = c[x];
  }
  if(num.length() == 5){
    z = d[x];
  }
  if(num.length() == 6){
    z = e[x];
  }
  if(num.length()==7){z=f[x];}
      ClearDisplay();
   for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber + gridnum)[y]);
   }
    for(int16_t x=3;x>=0;x--){
     SPI.transfer(Digits_35_DotMatrix(z)[x]);
    }
    gridnum++;
    if( gridnum >=14){gridnum=0;}
}

 }

//****************************
//Method to display string 
// note from grid 1 to 14 onle row 1
//******************************
void Display(String str,bool leftAlignDisplay = true){
SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
  uint8_t gridnum = 0;
  for(uint8_t y=0;y < str.length();y++){
  char c = str.charAt(y);
    rc=c;
    ClearDisplay();
   for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridnum + gridNumber)[y]);
   }
    for(int16_t x=3;x>=0;x--){
     SPI.transfer(Alphabet_35_DotMatrix(c)[x]);
    }
       gridnum++;
     if( gridnum >= 14){gridnum=0;}
  }
}
//**********************
// Display digits row 2 from grid 16 to 19
//************************************
void DisplayRow_2_Number(uint8_t number){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
  uint8_t a[] = {(number /10)%10,number %10};
      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
     for(int16_t x=3;x>=0;x--){
     SPI.transfer(Number_14SegmentsDigit_1L(a[0])[x]);
     }

      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
      for(int16_t x=3;x>=0;x--){
     SPI.transfer(Number_14SegmentsDigit_2R(a[1])[x]);
    } 
}
//************************************
// dispaly alphabet row 2 from grid 16 to 19 only
//************************************
void DisplayAlphaBet_14SegmentsRow_2(String str){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
  char c1 ;
  char c2;  
   // for(uint8_t x=0;x< str.length();x++){
      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
      SPI.transfer(GridsData(gridNumber)[y]);
    }
       c1 = str.charAt(0);
        for(int16_t y =3;y>=0;y--){
        SPI.transfer(Alphabet_14Segments_L(c1)[y]);
       }
       ClearDisplay();
    for(int16_t y=3;y>=0;y--){
      SPI.transfer(GridsData(gridNumber)[y]);
    }
       c2 = str.charAt(1-1);
        for(int16_t y =3;y>=0;y--){
        SPI.transfer(Alphabet_14Segments_R('m')[y]);
       }
   // }
}
//*******************************************
//Display digits in grid 15 only 
//note only two digit
//********************************************
void Display_G_15_Number(uint8_t number){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
  uint8_t a[] ={(number /10)%10,number %10};
      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
     for(int16_t x=3;x>=0;x--){
     SPI.transfer(Number_8SegmentsGird_15L(a[0])[x]);
    } 
      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
     for(int16_t x=3;x>=0;x--){
     SPI.transfer(Number_8SegmentsGird_15R(a[1])[x]);
    }     
}
//********************************
// Display icons in grid 15 only row 2
//*********************************
void DisplayIconGrid_15(String icon){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
    for(int16_t x=3;x>=0;x--){
     SPI.transfer(Icon_Gired_15(icon)[x]);
    }
}
//********************************
// Display icons in grid 16 only row 2
//*********************************
void DisplayIconGrid_16(String icon){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
      ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
    for(int16_t x=3;x>=0;x--){
     SPI.transfer(Icon_Gird_16(icon)[x]);
    }
}
 //********************************
// Display icons in grid 20 only row 2
//*********************************
void DisplayIconGrid_20(String icon){
  SPI.beginTransaction(SPISettings(1000000,LSBFIRST,SPI_MODE3));
   rS = icon;
    ClearDisplay();
    for(int16_t y=3;y>=0;y--){
    SPI.transfer(GridsData(gridNumber)[y]);
   }
    for(int16_t x=3;x>=0;x--){
     SPI.transfer(Icon_Grid_20(icon)[x]);
    }
}
