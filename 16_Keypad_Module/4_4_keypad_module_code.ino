// C++ code
// Written By: M.Arslan Ahmad
#include <Keypad.h>
const byte ROWS = 4; // No.of rows on keypad
const byte COLS = 4; // No.of columns on keypad
//the layout of the keypad
char keys[ROWS][COLS] = {
  {'1' , '2' , '3' , 'A'},
  {'4' , '5' , '6' , 'B'},
  {'7' , '8' , '9' , 'C'},
  {'*' , '0' , '#' , 'D'}
};
byte rowpins[ROWS] = {2 , 3 , 4 , 5}; //connect to the row pinouts of the keypad
byte colpins[COLS] = {6 , 7 , 8 , 9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys) , rowpins , colpins , ROWS , COLS);
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  char key = keypad.getKey(); // getting the pressed key
  if (key)
  {
    Serial.println(" ");
    Serial.print("Pressed KEY = ");
    Serial.println(key);
  }
}
  
  