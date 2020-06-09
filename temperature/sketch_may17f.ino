#include<SoftwareSerial.h>
//int ledPin=13;
int T=A2;
float CELSIUS;
void setup()
{
  Serial.begin(9600);
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
   /*if (LIGHT>10) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }*/
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
