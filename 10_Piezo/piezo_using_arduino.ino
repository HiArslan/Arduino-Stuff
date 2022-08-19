// C++ code
//
void setup()
{
}

void loop()
{
  // Tone takes 3 argumnets 1st the pin , 2nd the frequency(HZ) , 3rd time in milli-seconds
  tone(8 , 988 , 1000); // tone function
  delay (1000);
  tone (8 , 1047 , 1000);
  delay (1000);
}