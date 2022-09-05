// C++ code
// Servo Motors
// From: Muhammad Arslan Ahmad
#include <Servo.h>

Servo servo_1; // creating object of servo motors
int pos = 0; // Initial position of servo at zero

void setup()
{
  servo_1.attach(4); // i've attached the pin at pin#4
}

void loop()
{
  // If you want servo to move at a specific angle then use this code:
  /*
  servo_1.write(0);  // tell servo to go to a particular angle
  delay(1000);
  servo_1.write(90);              
  delay(500); 
  servo_1.write(135);              
  delay(500);
  servo_1.write(180);              
  delay(1500);
  */
  
  // This code is for whole 180 degree rotation of servo
  for(pos=0 ; pos<=180 ; pos++)
  {
    servo_1.write(pos);
    delay(20);
  }
  delay(1000);
  for(pos=180 ; pos>=0 ; pos--)
  {
    servo_1.write(pos);
    delay(20);
  }
  delay(1000);
}