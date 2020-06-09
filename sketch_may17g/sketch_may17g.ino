int LED=11;
int isObstaclePin=7;
int isObstacle=HIGH;
void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(isObstaclePin,INPUT);
  Serial.begin(9600);

}

void loop() 
{
isObstacle=digitalRead(isObstaclePin);
if(isObstacle==LOW)
{
  Serial.println("obstacle");
  digitalWrite(LED,HIGH);
}
else
{
  Serial.println("clear");
  digitalWrite(LED,LOW);
}
delay(200);
}
