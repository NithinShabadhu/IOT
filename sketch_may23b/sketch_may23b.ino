int sensorValue;
void setup()
{
  Serial.begin(9600);
}

void loop() 
{
 sensorValue=analogRead(A0);
 Serial.print("\n");
 Serial.print(sensorValue,DEC);
 delay(2000);
}
