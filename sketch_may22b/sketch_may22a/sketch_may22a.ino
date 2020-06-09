#include<SoftwareSerial.h>
int R=5;
void setup()
{
  Serial.begin(9600);
  pinMode(R,INPUT);
}
void READ()
{
  if(digitalRead(R)==LOW)
  {
    Serial.print("OPEN");
    Serial.print("\n");
  }
  else
  {
    Serial.print("CLOSE");
    Serial.print("\n");
  }
  delay(2000);
}
void loop()
{
  while(1)
  {
    READ();
  }
}
