int led = 11;
int brightness = 0;
int fade = 5;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);
  brightness += fade;

  if (brightness >= 255 || brightness <= 0) {
    fade = -fade;
  }

  delay(30);
}