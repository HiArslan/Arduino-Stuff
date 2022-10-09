// Project : Tempertaure Sensor values on 16x2 LCD display
// From : Muhammad Arslan Ahmad
#include "LiquidCrystal.h"
// Pins configuration of 16x2 LCD
LiquidCrystal lcd(2,3,4,5,6,7);
// Initial value of temperature sensor
int sensorPin = A0;
void setup()
{
  // Initializing Serial communication
  Serial.begin(9600);
  lcd.begin(16,2);
}
 
void loop()
{
 
 int value = analogRead(sensorPin);

 // measure the 5v with a meter for an accurate value
 //In particular if your Arduino is USB powered

 float voltage = value * 4.68;
 voltage /= 1024.0;
 
 // now print out the temperature

 float temperatureC = (voltage - 0.5) * 100;
 Serial.print(temperatureC);
 Serial.println(" degrees C");

   lcd.setCursor(0,0);
   lcd.print("Temp-Value = ");
   lcd.setCursor(0,1);
   lcd.print(temperatureC);
   lcd.print(" Degrees C");
   //lcd.setCursor(11,1);
   //lcd.print(temperatureC);
 
 delay(100);
}