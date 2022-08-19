// C++ code
//
int red_led = 2; // Red led pin
int blue_led = 3; // Blue led pin
int green_led = 4; // Green led pin
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  setcolor(255,255,255); // RGB colors
  delay(1000);
  setcolor(255,255,0);
  delay(1000);
  setcolor(0,255,255);
  delay(1000);
  setcolor(252, 186, 3);
  delay(1000);
  setcolor(252, 111, 3);
  delay(1000);
  setcolor(152, 252, 3);
  delay(1000);
  setcolor(3, 248, 252);
  delay(1000);
}

void setcolor(int red , int blue , int green) 
{ // value will be b/w 0-255
  analogWrite(2 , red); // read led is at pin 2
  analogWrite(3 , blue); // blue led is at pin 3
  analogWrite(4 , green); // green led is at pin 4
}