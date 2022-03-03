#define clockRedGreen 4000 //
#define lowClockRedGreen 1000//
#define clockYellow 300 // queda parpadeando 5 veces son 1500 ms
#define lowYellow 100 // queda apagado 5 veces son 500 ms

void setup()
{

  for (int pinLed=11 ; pinLed <= 13;  pinLed++) 
  {
    pinMode( pinLed, OUTPUT);
  }

}

void loop()
{ 
  for (int pinLed = 11;  pinLed <= 12;  pinLed++)
  {
    if( pinLed!=12)
    {
      digitalWrite(pinLed, LOW);
      delay(lowClockRedGreen);	
      digitalWrite(pinLed, HIGH);
      delay(clockRedGreen);
      digitalWrite(pinLed, LOW);
      delay(lowClockRedGreen);	
    }
    else{

      for (int i=0;i<5;i++)
      {
        digitalWrite(pinLed, HIGH);
        delay(clockYellow);
        digitalWrite(pinLed, LOW);
        delay(lowYellow);
       
      }
    }
  }
  for (int pinLed =13;  pinLed >=12;  pinLed--)
  {
    if( pinLed!=12)
    {
      digitalWrite(pinLed, LOW);
      delay(lowClockRedGreen);	
      digitalWrite(pinLed, HIGH);
      delay(clockRedGreen);
      digitalWrite(pinLed, LOW);
      delay(lowClockRedGreen);	
    }
    else
    {
      for (int i=0;i<5;i++)
      {
        digitalWrite(pinLed, HIGH);
        delay(clockYellow);
        digitalWrite(pinLed, LOW);
        delay(lowYellow);
       
      }
    }
  }
} 