// C++ code
//
int red_led = 2; // Red led at pin 2
int yellow_led = 3; // Yellow at pin 3
int green_led = 4; // Green at pin 4
int input = 6; // Pushbutton input at pin 6
void setup()
{
  pinMode(2, OUTPUT);
  pinMode (3 , OUTPUT);
  pinMode (4 , OUTPUT);
  pinMode (6 , INPUT);
}

void loop()
{
  // when we'll push button first red led will turn on
  if (digitalRead (6)  == HIGH) {
  	digitalWrite(2 , HIGH);
  	delay (2000);
  // Then after delay yellow will turn on
  	digitalWrite(2 , LOW);
  	digitalWrite(3 , HIGH);
  	delay (1000);
  // Finally green led will turn on after delay 
  	digitalWrite(3 , LOW);
  	digitalWrite(4 , HIGH);
  	delay (2000);
    digitalWrite (4 , LOW);
    }
    
}