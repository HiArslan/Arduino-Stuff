// C++ code
//
int LDR_pin = A0; // LDR pin
int led_pin = 2; // Led pin
int threshold = 55; // Threshold value for LDR
void setup()
{
  Serial.begin(9600);
  pinMode(led_pin , OUTPUT);
}

void loop()
{
  int received_data = analogRead(LDR_pin);
  Serial.println("");
  Serial.print("Light Sensor Value = ");
  //Serial.print("Value = ");
  Serial.print(received_data); // High_value(800 etc) means there is light on 
  							   //  LDR and less_value(54 etc) means darkness
  // delay(1);
  if (received_data <= threshold){
    digitalWrite(led_pin , HIGH);
  }
  else {
    digitalWrite (led_pin , LOW);
  }
}