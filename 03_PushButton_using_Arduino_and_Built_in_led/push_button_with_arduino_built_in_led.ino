const int buttonPin = 2; // Push button input on pin 2 of digital
const int ledPin = 13; // Buitin Led on pin 13    	


int buttonState = 0; 
void setup() {
  
  pinMode(ledPin, OUTPUT);
  
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
