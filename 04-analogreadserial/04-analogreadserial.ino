void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop()
{
  int value = analogRead(A0);
  float voltage = value*(5.0 / 1023.0);
  Serial.print("analog value :");
  Serial.print(value);
  Serial.println("\n");
  Serial.print("\nin voltage :");
  Serial.println(voltage);  
  delay(10);
}