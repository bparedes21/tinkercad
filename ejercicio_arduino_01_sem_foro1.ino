#define LUZROJA 13
#define LUZAMARILLA 12
#define LUZVERDE 8
void setup()
{
  for (int pinLed=11; pinLed<=13; pinLed++)
  {
    pinMode( pinLed, OUTPUT);
 	pinMode( pinLed, OUTPUT);
  	pinMode( pinLed, OUTPUT);
  }
  
}

void loop()
{
  for (int pinLed=11; pinLed<=13; pinLed++)
  {
    digitalWrite(pinLed, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(pinLed, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
  for (int pinLed=13; pinLed>=11; pinLed--)
  {
    digitalWrite(pinLed, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(pinLed, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }

  
  
  
  
}