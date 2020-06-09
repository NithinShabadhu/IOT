#include<SoftwareSerial.h>
int Buzz=8;
//int SPEAKER=8;
//int freq=50;
int T=A2;
float CELSIUS;
void setup()
{
  Serial.begin(9600);
  //pinMode(SPEAKER, OUTPUT);
}
void TEMPERATURE()
{
  Serial.print("Getting Temp");
    int value_temp=analogRead(T);
    delay(10);
   // value_lig=analogRead(L);
    //delay(10);
    float millivolts_temp=(value_temp/1023.0)*5000;
    CELSIUS=millivolts_temp/10;
    Serial.print("T:");
    Serial.print(CELSIUS);
    Serial.print("\n");
    delay(2000);
    if (T > 20)
{
  digitalWrite(Buzz,HIGH);
  }
else
{
  digitalWrite (Buzz,LOW);
  }
}
   
void loop()
{
  Serial.print("Temperature calculator");
  Serial.print("\n");
  delay(1000);
  while(1)
{
  TEMPERATURE();
  delay(2000);
}
}
