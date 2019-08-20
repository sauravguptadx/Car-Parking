#include<Servo.h>
#include "LiquidCrystal.h"

LiquidCrystal lcd(8,9,4,5,6,7);

//  https://www.allaboutcircuits.com/projects/interface-an-lcd-with-an-arduino/

Servo gateL , gateM , gateR ;

int cl1 = 0;
int cl2 = 0;
int cl3 = 0 ;
int cl4 = 0;

int cm1 = 0;
int cm2 = 0;
int cm3 = 0;
int cm4 = 0;


int cr1 = 0;
int cr2 = 0;
int cr3 = 0;
int cr4 = 0;


int L = 0 ;
int M = 0 ; 
int R = 0 ;


int spValue = 0; 

int spL1=23;
int spL2=25;
int spL3=27;
int spL4=31; 


int spM1=33;
int spM2=35;
int spM3=37;
int spM4= 39;


int spR1=43;
int spR2=45;
int spR3=47;
int spR4= 49;

int sgpL = 29 ;
int sgpM = 41;
int sgpR = 51 ;



int ePin =52 ;



int ledr0 = 22 ;
int ledr1 = 24;
int ledr2 = 26;
int ledr3 = 28;
int ledr4 = 30;

int ledm0 = 32 ;
int ledm1 = 34;
int ledm2 = 36;
int ledm3 = 38;
int ledm4 = 40;

int ledl0 = 42 ;
int ledl1 = 44;
int ledl2 = 46;
int ledl3 = 48;
int ledl4 = 50;

int flag = 0 ;
int plot = -1 ;

int spinL1 = 90 ;
int spinL2 = 00;

int spinM1 = 90 ;
int spinM2 = 160 ;

int spinR2 = 150 ;
int spinR1 = 70 ;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); 
  Serial.print("LOGIC");


  pinMode(spL1, INPUT);
  pinMode(spL2, INPUT);
  pinMode(spL3, INPUT);
  pinMode(spL4, INPUT);

  pinMode(spM1, INPUT);
  pinMode(spM2, INPUT);
  pinMode(spM3, INPUT);
  pinMode(spM4, INPUT);

  pinMode(spR1, INPUT);
  pinMode(spR2, INPUT);
  pinMode(spR3, INPUT);
  pinMode(spR4, INPUT);

  pinMode(sgpL, INPUT);
  pinMode(sgpM, INPUT);
  pinMode(sgpR, INPUT);


  pinMode(ePin, INPUT);

  pinMode(ledl0, OUTPUT);
  pinMode(ledl1, OUTPUT);
  pinMode(ledl2, OUTPUT);
  pinMode(ledl3, OUTPUT);
  pinMode(ledl4, OUTPUT);

  pinMode(ledm0, OUTPUT);
  pinMode(ledm1, OUTPUT);
  pinMode(ledm2, OUTPUT);
  pinMode(ledm3, OUTPUT);
  pinMode(ledm4, OUTPUT);

  pinMode(ledr0, OUTPUT);
  pinMode(ledr1, OUTPUT);
  pinMode(ledr2, OUTPUT);
  pinMode(ledr3, OUTPUT);
  pinMode(ledr4, OUTPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


  gateL.attach(11);
  gateM.attach(10);
  gateR.attach(12);

  gateL.write(spinL2);
  gateM.write(spinM2);
  gateR.write(spinR2);


  lcd.begin(16,2);

  // set cursor position to start of first line on the LCD
  lcd.setCursor(0,0);
  //text to print
  lcd.print("Left  Mid  Right");

}




void select(int spin)
{
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  spValue=digitalRead(ePin);
  if(spValue == 0)
  {
    flag = 1 ;
  }

  if(flag == 1)
  {

    if(digitalRead(spL1)==1)
    {
      

      digitalWrite(ledl0,HIGH);
      digitalWrite(ledl1,HIGH);

      gateL.write(spinL1);
      
      //delay(1000);
      flag = 0 ;

      while(digitalRead(sgpL)==1) ;

      gateL.write(spinL2);

      
      while(digitalRead(spL1)==1) ;
      //delay(9000);

      

      digitalWrite(ledl0,LOW);
      digitalWrite(ledl1,LOW);

      
      
    }
    else if(digitalRead(spM1)==1)
    {
      digitalWrite(ledm0,HIGH);
      digitalWrite(ledm1,HIGH);

      gateM.write(spinM1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpM)==1) ;
      gateM.write(spinM2);
      while(digitalRead(spM1)==1) ;

      digitalWrite(ledm0,LOW);
      digitalWrite(ledm1,LOW);

      
    }
    else if(digitalRead(spR1)==1)
    {
      digitalWrite(ledr0,HIGH);
      digitalWrite(ledr1,HIGH);

      gateR.write(spinR1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpR)==1) ;
      gateR.write(spinR2);
      while(digitalRead(spR1)==1) ;

      digitalWrite(ledr0,LOW);
      digitalWrite(ledr1,LOW);

      
    }
    else if(digitalRead(spL2)==1)
    {
      

      digitalWrite(ledl2,HIGH);
      digitalWrite(ledl1,HIGH);

      gateL.write(spinL1);
      //delay(9000);

      

      //delay(1000);
      flag = 0 ;

      while(digitalRead(sgpL)==1) ;

      gateL.write(spinL2);

      while(digitalRead(spL2)==1) ;

      digitalWrite(ledl2,LOW);
      digitalWrite(ledl1,LOW);

      
      
    }
    else if(digitalRead(spM2)==1)
    {
      digitalWrite(ledm2,HIGH);
      digitalWrite(ledm1,HIGH);

      gateM.write(spinM1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpM)==1) ;
      gateM.write(spinM2);
      while(digitalRead(spM2)==1) ;

      digitalWrite(ledm2,LOW);
      digitalWrite(ledm1,LOW);

      
    }
    else if(digitalRead(spR2)==1)
    {
      digitalWrite(ledr2,HIGH);
      digitalWrite(ledr1,HIGH);

      gateR.write(spinR1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpR)==1) ;
      gateR.write(spinR2);
      while(digitalRead(spR2)==1) ;

      digitalWrite(ledr2,LOW);
      digitalWrite(ledr1,LOW);

      
      
    }
    //////////////////////////////////////////// 3 ////////////////////////////
    else if(digitalRead(spL3)==1)
    {
      

      digitalWrite(ledl2,HIGH);
      digitalWrite(ledl3,HIGH);

      gateL.write(spinL1);
      //delay(9000);

      

      //delay(1000);
      flag = 0 ;

      while(digitalRead(sgpL)==1) ;
      gateL.write(spinL2);
      while(digitalRead(spL3)==1) ;

      digitalWrite(ledl2,LOW);
      digitalWrite(ledl3,LOW);

      
      
      
    }
    else if(digitalRead(spM3)==1)
    {
      digitalWrite(ledm2,HIGH);
      digitalWrite(ledm3,HIGH);

      gateM.write(spinM1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpM)==1) ;
      gateM.write(spinM2);
      
      while(digitalRead(spM3)==1) ;

      digitalWrite(ledm2,LOW);
      digitalWrite(ledm3,LOW);

      
    }
    else if(digitalRead(spR3)==1)
    {
      digitalWrite(ledr2,HIGH);
      digitalWrite(ledr3,HIGH);

      gateR.write(spinR1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpR)==1) ;
      gateR.write(spinR2);
      
      while(digitalRead(spR3)==1) ;

      digitalWrite(ledr2,LOW);
      digitalWrite(ledr3,LOW);
      
    }
    /////////////////////////////////////// 4 ////////////////////////////////////
    else if(digitalRead(spL4)==1)
    {
      

      digitalWrite(ledl3,HIGH);
      digitalWrite(ledl4,HIGH);

      gateL.write(spinL1);
      //delay(9000);

      

      //delay(1000);
      flag = 0 ;

      while(digitalRead(sgpL)==1) ;
      gateL.write(spinL2);
      

      while(digitalRead(spL4)==1) ;

      digitalWrite(ledl4,LOW);
      digitalWrite(ledl3,LOW);

      
    }
    else if(digitalRead(spM4)==1)
    {
      digitalWrite(ledm3,HIGH);
      digitalWrite(ledm4,HIGH);

      gateM.write(spinM1);
      //delay(9000);

      

      //delay(1000);
      

      while(digitalRead(sgpM)==1) ;
      gateM.write(spinM2);

      while(digitalRead(spM4)==1) ;

      digitalWrite(ledm3,LOW);
      digitalWrite(ledm4,LOW);

      
    }
    else if(digitalRead(spR4)==1)
    {
      digitalWrite(ledr3,HIGH);
      digitalWrite(ledr4,HIGH);

      gateR.write(spinR1);
      //delay(9000);

      

      //delay(1000);
      

      
      while(digitalRead(sgpR)==1) ;
      gateR.write(spinR2);
      while(digitalRead(spR4)==1) ;

      digitalWrite(ledr3,LOW);
      digitalWrite(ledr4,LOW);
      
    }


    flag = 0;
  
  }

  flag = 0 ;




  /*if(digitalRead(spL1)==1) L++;
  if(digitalRead(spL2)==1) L++;
  if(digitalRead(spL3)==1) L++;
  if(digitalRead(spL4)==1) L++;
  if(digitalRead(spM1)==1) M++ ;
  if(digitalRead(spM2)==1) M++ ;
  if(digitalRead(spM3)==1) M++;
  if(digitalRead(spM4)==1) M++;
  if(digitalRead(spR1)==1) R++;
  if(digitalRead(spR2)==1) R++;
  if(digitalRead(spR3)==1) R++;
  if(digitalRead(spR4)==1) R++;

  lcd.setCursor(0,1);
  //text to print
  lcd.print(" ");
  lcd.print(L);

  lcd.print("     ");
  //text to print
  lcd.print(M);

  lcd.print("     ");
  //text to print
  lcd.print(R);

  L=M=R=0;

  
*/

  if(digitalRead(spL1)==1) cl1=0;
  if(digitalRead(spL2)==1) cl2=0;
  if(digitalRead(spL3)==1) cl3=0;
  if(digitalRead(spL4)==1) cl4=0;
  if(digitalRead(spM1)==1) cm1=0;
  if(digitalRead(spM2)==1) cm2=0;
  if(digitalRead(spM3)==1) cm3=0;
  if(digitalRead(spM4)==1) cm4=0;
  if(digitalRead(spR1)==1) cr1=0;
  if(digitalRead(spR2)==1) cr2=0;
  if(digitalRead(spR3)==1) cr3=0;
  if(digitalRead(spR4)==1) cr4=0;


  lcd.setCursor(0,1);
  //text to print
  lcd.print(cl1);
  lcd.print(cl2);
  lcd.print(cl3);
  lcd.print(cl4);

  lcd.print("  ");
  //text to print
  lcd.print(cm1);
  lcd.print(cm2);
  lcd.print(cm3);
  lcd.print(cm4);

  lcd.print("  ");
  //text to print
  lcd.print(cr1);
  lcd.print(cr2);
  lcd.print(cr3);
  lcd.print(cr4);
  
  cl1 = 1;
  cl2 = 1;
  cl3 = 1 ;
  cl4 = 1;

  cm1 = 1;  
  cm2 = 1;
  cm3 = 1;
  cm4 = 1;


  cr1 = 1;
  cr2 = 1;
  cr3 = 1;
  cr4 = 1;



 
  //lcd.clear();

  
}


/*
 * 2nd motor :-> 180 90
 * 
 * 3rd Motor 0 90
 * 
 * 
 * /
 */
