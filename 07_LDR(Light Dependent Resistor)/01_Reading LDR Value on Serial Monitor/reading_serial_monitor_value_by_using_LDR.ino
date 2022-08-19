// C++ code
//
int LDR_input = A0; // LDR Input Pin
void setup()
{
  Serial.begin(9600); // Starting Communication
}

void loop()
{
  int sensor_val = analogRead(A0); // Reading LDR input value
  Serial.println(" ");
  Serial.print("LDR Value = ");
  Serial.println(sensor_val);
  delay(100);
}