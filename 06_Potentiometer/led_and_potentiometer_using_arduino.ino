// C++ code
//
int potentio_pin = A0;
int red_led = 13;
int sensor_value = 0;
void setup()
{
  Serial.begin(9600);
  pinMode (A0 , INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  sensor_value = analogRead (potentio_pin);
  digitalWrite (13 , HIGH);
  delay (sensor_value);
  digitalWrite(13 , LOW);
  delay (sensor_value);
}