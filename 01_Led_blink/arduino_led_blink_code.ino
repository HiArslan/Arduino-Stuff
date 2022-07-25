// C++ code
//
int red_led=13;
void setup()
{
  pinMode(red_led, OUTPUT);
}

void loop()
{
  digitalWrite(red_led, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}