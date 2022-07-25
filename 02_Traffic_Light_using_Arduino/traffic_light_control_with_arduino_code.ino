// C++ code
//
int red_led=8; // Red light on pin 8
int yellow_led=9; // Yellow light on pin 9
int green_led=10; // Green light on pin 10
void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop()
{
  digitalWrite(red_led , HIGH);
  digitalWrite(yellow_led , LOW);
  digitalWrite(green_led ,LOW);
  delay(3000);
  
  digitalWrite(red_led, LOW);
  digitalWrite(yellow_led , HIGH);
  digitalWrite(green_led , LOW);
  delay(3000);
  
  digitalWrite(red_led , LOW);
  digitalWrite(yellow_led , LOW);
  digitalWrite(green_led , HIGH);
  delay(3000);
}