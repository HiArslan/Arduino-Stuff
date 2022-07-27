// C++ code
// Code for reading the potentiometer value as we turn it.
int potentio_value = A0; // Potentiometer output at pin A0
void setup()
{
  Serial.begin(9600); // Serial.begin for making connection with your pc
}

void loop()
{
  int sensor_value = analogRead(A0);
  Serial.println(sensor_value);
  delay(1);
}