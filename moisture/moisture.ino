int sensor_pin=A0;
int output_value;
void setup()
{
  Serial.begin(9600);
  Serial.println("read from the sensor");
  delay(2000);
}
void loop()
{
  output_value=analogRead(sensor_pin);
  output_value=map(output_value,550,0,0,100);
  Serial.print("moisture:");
  Serial.print(output_value);
  Serial.print("% \n");
  delay(1000);
}
