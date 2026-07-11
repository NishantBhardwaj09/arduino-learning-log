int button = 12;
void setup()
{
  Serial.begin(9600);
  pinMode(button,INPUT);
}

void loop()
{
  int state = digitalRead(button);
  Serial.println(state);
  delay(10); 
}