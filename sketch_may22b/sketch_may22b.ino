#include<SoftwareSerial.h>
int R=5;
int ledPin=13;
int L=A4;
float LIGHT;
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
    int value_lig=analogRead(L);
    delay(10);
   // value_lig=analogRead(L);
    //delay(10);
    float millivolts_lig=(value_lig/1023.0)*5000;
    LIGHT=millivolts_lig/10;
    Serial.print("L:");
    Serial.print(LIGHT);
    Serial.print("\n");
    delay(2000);
   
  }
  else
  {
    Serial.print("CLOSE");
    Serial.print("\n");
  }
  delay(2000);

}
 /*void LIG()
{
  Serial.print("Getting Light");
    int value_lig=analogRead(L);
    delay(10);
   // value_lig=analogRead(L);
    //delay(10);
    float millivolts_lig=(value_lig/1023.0)*5000;
    LIGHT=millivolts_lig/10;
    Serial.print("L:");
    Serial.print(LIGHT);
    Serial.print("\n");
    delay(2000);
    if (LIGHT>10) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }*/
void loop(){
  //Serial.print("Light calculator");
  //Serial.print("\n");
  //delay(1000);
  while(1)
{
 // LIG();
  READ();
  delay(2000);
}
 /* if (LIGHT>10) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);*/
}
