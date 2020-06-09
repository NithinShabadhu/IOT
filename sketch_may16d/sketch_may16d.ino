#include <OneWire.h>
#include <DallasTemperature.h>
#include <Phpoc.h>
#define UPDATE_INTERVAL 1000 // in ms
#define SAMPLE_INTERVAL 60*60*1000 // 1 hour

// Data wire is plugged into port 8 on the Arduino
OneWire oneWire(8);
DallasTemperature sensors(&oneWire);

unsigned long lastSampleTime;
unsigned long lastUpdateTime;

float temps[100];
int index;

void setup() {
  Serial.begin(9600);
  while(!Serial)
    ;
  
  sensors.begin();
  Phpoc.begin();

  lastSampleTime = millis();
  lastUpdateTime = millis();
  index = 0;
}

void loop() {
  if((millis() - lastSampleTime) > SAMPLE_INTERVAL) {
    sensors.requestTemperatures(); 
    float temp = sensors.getTempCByIndex(0);

    temps[index] = temp;

    index = (index + 1) % 100;

    lastSampleTime = millis();
  }

  if((millis() - lastUpdateTime) > UPDATE_INTERVAL) {
    for(int i = 0; i < 100; i++) {
      Serial.println(temps[(index - i + 100)%100]);
    }

    lastUpdateTime = millis();
  }
}
