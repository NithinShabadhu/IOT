#include<SoftwareSerial.h>
int X=5;
void setup()
{
  Serial.begin(9600);
  pinMode(X,INPUT);
}
void READ()
{
  if(digitalRead(X)==LOW)
  {
    Serial.print("YES");
    Serial.print("\n");
  }
  else
  {
    Serial.print("NO");
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
