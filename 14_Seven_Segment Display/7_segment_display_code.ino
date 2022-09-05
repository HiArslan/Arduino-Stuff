// C++ code
// 7-Segment display
// From: Muhammad Arslan Ahmad
void setup()
{
  pinMode(2, OUTPUT); //A
  pinMode(3, OUTPUT); //B
  pinMode(4, OUTPUT); //C
  pinMode(5, OUTPUT); //D
  pinMode(6, OUTPUT); //E
  pinMode(7, OUTPUT); //E
  pinMode(8, OUTPUT); //F
}
void zero()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}
void one()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
void two()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
}
void three()
{
  digitalWrite(2 ,HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
}
void four()
{
  digitalWrite(2 , LOW);
  digitalWrite(3 , HIGH);
  digitalWrite(4 , HIGH);
  digitalWrite(5 , LOW);
  digitalWrite(6 , LOW);
  digitalWrite(7 , HIGH);
  digitalWrite(8 , HIGH);
}
void five()
{
  digitalWrite(2 , HIGH);
  digitalWrite(3 , LOW);
  digitalWrite(4 , HIGH);
  digitalWrite(5 , HIGH);
  digitalWrite(6 , LOW);
  digitalWrite(7 , HIGH);
  digitalWrite(8 , HIGH);
}
void six()
{
  digitalWrite(2 , HIGH);
  digitalWrite(3 , LOW);
  digitalWrite(4 , HIGH);
  digitalWrite(5 , HIGH);
  digitalWrite(6 , HIGH);
  digitalWrite(7 , HIGH);
  digitalWrite(8 , HIGH);
}
void seven()
{
  digitalWrite(2 , HIGH);
  digitalWrite(3 , HIGH);
  digitalWrite(4 , HIGH);
  digitalWrite(5 , LOW);
  digitalWrite(6 , LOW);
  digitalWrite(7 , LOW);
  digitalWrite(8 , LOW);
}
void eight()
{
  digitalWrite(2 , HIGH);
  digitalWrite(3 , HIGH);
  digitalWrite(4 , HIGH);
  digitalWrite(5 , HIGH);
  digitalWrite(6 , HIGH);
  digitalWrite(7 , HIGH);
  digitalWrite(8 , HIGH);
}
void nine()
{
  digitalWrite(2 , HIGH);
  digitalWrite(3 , HIGH);
  digitalWrite(4 , HIGH);
  digitalWrite(5 , LOW);
  digitalWrite(6 , LOW);
  digitalWrite(7 , HIGH);
  digitalWrite(8 , HIGH);
}
void loop()
{
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
}