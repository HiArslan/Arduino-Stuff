// C++ code
//
int trig = 2; // attach pin D2 Arduino to pin trig of HC-SR04
int echo = 3; //attach pin D3 Arduino to pin Echo of HC-SR04
int piezo = 4;
int led = 12;

void setup()
{
  Serial.begin(9600); //For communication
  pinMode (trig , OUTPUT); // Trig as OUTPUT
  pinMode (echo , INPUT); // Echo as INPUT
  pinMode (piezo , OUTPUT);
  pinMode (led , OUTPUT);
}

void loop()
{
   // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trig , HIGH); // for generating ultrasonic wave
  delayMicroseconds (10);
  digitalWrite(trig , LOW);
  int time = pulseIn (echo , HIGH); // variable for the duration of sound wave travel
  int distance = (time * 0.034) / 2; // S = V*T variable for the distance measurement
  if (distance <= 250)
  {
    Serial.println(" ");
    Serial.print("Chor a gay:");
    Serial.print(distance);
    digitalWrite(led , HIGH);
    //tone(piezo , 1000 , 1000); // The buzzer will not turn off until and unless its 3rd argument will not be reached
    						  // which is time in milliseconds 
    digitalWrite(piezo , HIGH);
    delay(100);
  }
  else {
    Serial.println(" ");
    Serial.print("Chor bhaj gaye:");
    Serial.print(distance);
    digitalWrite(led , LOW);
    digitalWrite(piezo , LOW);
    
  }
}