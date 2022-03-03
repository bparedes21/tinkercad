#define reloj 100

void setup()
{
  
  for (int pinLed=9 ; pinLed <= 13;  pinLed++) 
  {
    pinMode( pinLed, OUTPUT);
  }
  
}

void loop()
{
 for (int pinLed = 9;  pinLed <= 13;  pinLed++)
 {
    digitalWrite(pinLed, HIGH);
    delay(reloj);
    digitalWrite(pinLed, LOW);
    delay(reloj);
  }
  for (int pinLed = 13;  pinLed >=9;  pinLed--)
 {
    digitalWrite(pinLed, HIGH);
    delay(reloj);
    digitalWrite(pinLed, LOW);
    delay(reloj);
  }
}