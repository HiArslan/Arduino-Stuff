// C++ code
// Written By: M.Arslan Ahmad
int gas_sensor = A0;
int sensor_value = 0;
int piezo = 3;
void setup()
{
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor_value = analogRead(gas_sensor);
  Serial.println(sensor_value);
  if (sensor_value >= 500)
  {
    digitalWrite(piezo , HIGH);
  }
  else
  {
    digitalWrite(piezo , LOW);
  }
}