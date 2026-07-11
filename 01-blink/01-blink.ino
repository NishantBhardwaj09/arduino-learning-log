int led = 13; 
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
    digitalWrite(led,high);
    delay(1000);
    digitalWrite(led,low);
    delay(1000);
}
