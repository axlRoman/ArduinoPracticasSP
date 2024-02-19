//Fade
  int led = 9;
  int brightness = 0;
  int fadeAmount = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  Serial.println(brightness);

  if(brightness <= 0 || brightness >= 25){
    fadeAmount = -fadeAmount;
  }

  delay(100);
}
