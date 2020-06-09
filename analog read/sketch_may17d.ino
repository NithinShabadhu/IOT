void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int sensorvalue=analogRead(A0);
  Serial.println(sensorvalue);
  delay(2000);
  // put your main code here, to run repeatedly:

}
