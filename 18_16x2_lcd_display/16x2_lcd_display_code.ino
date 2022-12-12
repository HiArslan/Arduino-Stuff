// Written By: M.Arslan Ahmad 
#include <LiquidCrystal.h>
int potentio_pin = A0;
// initialize the library with the numbers of the interface pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(1,0);
  lcd.print("Hello World!");
  delay(1000);
  lcd.setCursor(1,1);
  String Message_1 = "M.Arslan Ahmad";
  lcd.print(Message_1);
  delay(1000);
  for (int pos=0; pos<Message_1.length(); pos++)
  {
    lcd.scrollDisplayLeft();
    delay(100);
  }
  lcd.clear();
}

void loop() 
{
}