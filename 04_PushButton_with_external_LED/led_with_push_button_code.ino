// C++ code
//
int led = 13;

int input = 2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode (2 , INPUT);
}

void loop()
{
  if (digitalRead (2) == HIGH){
    
  	digitalWrite(13, HIGH);
  }
  else 
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
    
}