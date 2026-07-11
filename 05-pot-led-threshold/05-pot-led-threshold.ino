int led = 12 ; 
void setup()
{
  Serial.begin(9600);
  pinMode (A0,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
	int value = analogRead(A0);
  	Serial.println(value);
  	if (value > 523)
    {
  		digitalWrite(led,HIGH);
  	}
  	else
    {
  		digitalWrite(led,LOW);
  	}
  	delay(1);
}