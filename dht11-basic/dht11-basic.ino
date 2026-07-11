#include <dht.h>
#define dataPin 2
dht DHT;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int readValue = DHT.read11(dataPin);
  float t = DHT.temperature;
  float h = DHT.humidity;
  Serial.print("Status = ");
  Serial.println(readValue);
  Serial.println("Temperature =");
  Serial.println(t);
  Serial.println("Humidity =");
  Serial.println(h);
  delay(2000);
}
