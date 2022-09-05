// C++ code
// PIR (Passive Infrared Sensor)
// From: Muhammad Arslan Ahmad
int bulb = 13; // Bulb pin attached to pin 13
int piezo = 4; // Piezo at pin 4
int pir = 3; // PIR Signal value at pin 3
void setup()
{
  pinMode(led , OUTPUT);
  pinMode(piezo , OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int pir_sensor_value = digitalRead(pir); // Reading PIR value which can either 1 or 0
  Serial.println(" ");
  Serial.print("PIR Sensor Value = ");
  Serial.print(pir_sensor_value);
  delay(1);
  // If pir sensor detects some motion then turn the bulb and buzzer on
  if (pir_sensor_value == HIGH){ 
    digitalWrite(led , HIGH);
    digitalWrite(piezo , HIGH);
  }
  else if (pir_sensor_value == LOW){
    digitalWrite (led , LOW);
    digitalWrite(piezo , LOW);
  }
}