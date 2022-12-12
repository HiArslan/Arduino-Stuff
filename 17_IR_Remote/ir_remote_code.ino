// Written BY: M.Arslan Ahmad
#include <IRremote.h>
int RECV_PIN = 12;
IRrecv irrecv(RECV_PIN);
decode_results result;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop()
{
  if(irrecv.decode(&result))
  {
    Serial.print("IR-HEX code = ");
    Serial.println(result.value , HEX);
    irrecv.resume();
  }
}