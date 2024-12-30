// Take note: this is code that is not clean.
// It's working, but you need to adapt it
// your requirements.

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
//const int rs = 8, en = 10, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
//I replace the pin 0 & 1 to 11 and 12 because they cause faill at load of code (TX&RX pins)
const int rs = 8, rw=9, en = 10, d0=11, d1=12, d2=2, d3=3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs,rw, en, d0, d1, d2, d3, d4, d5, d6, d7);
unsigned int NumberOfRows = 0;
unsigned int num=0;

void setup() {
  Serial.begin(115200);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  delay(1000); //PowerUp delay
  //set up the LCD's number of columns and rows:
  NumberOfRows = analogRead(A0);
  Serial.println(NumberOfRows, DEC);
  if(NumberOfRows >=450){   //This "IF" is to select the kind of display lines
  lcd.begin(20, 4); //VFD Noritake "itron" 4 rows 20 columns
  }
  else{
   lcd.begin(16, 2);  //LCD normal with 2 rows 16 columns
  }
  delay(80);
}

void loop() {
String myStg;
myStg = String(num);
num++;
delay(500);
  if(NumberOfRows >=450){ 
      lcd.setCursor(1, 0);
      delay(30);
      // Print a message to the LCD.
      lcd.print("HI FOLKS!  n:");
      lcd.print(myStg);
      delay(100);
      //
      lcd.setCursor(1, 1);
      delay(50);
      // Print a message to the LCD.
      lcd.print("This");  //
      delay(100);
      lcd.setCursor(1, 2);
      delay(50);
      // Print a message to the LCD.
      lcd.print("is Noritake/itron");  // 
      delay(100);
      lcd.setCursor(1, 3);
      delay(50);
      // Print a message to the LCD.
      lcd.print("ref:CU20045-UW");  // 
      delay(100);
  }
  
  else{
      lcd.setCursor(1, 0);
      delay(30);
      // Print a message to the LCD.
      lcd.print("HI FOLKS!:");
      lcd.print(myStg);
      //
      lcd.setCursor(1, 1);
      delay(50);
      // Print a message to the LCD.
      lcd.print("This is 44778");  //
      delay(1000);
  }
  Serial.println(num, DEC);
/*
  // Turn off the display:
  lcd.noDisplay();
  delay(750);
  // Turn on the display:
  lcd.display();
  delay(750);
  */
}