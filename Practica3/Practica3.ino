//Practica Iinicio 3
//Secuencia de encendido/apagado de LEDs
void setup() {
	//put you setup code here to run once:
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //put your main code here, to run repeately:
  digitalWrite(5,HIGH);
  delay(1500);
  digitalWrite(5,LOW);
  delay(500);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  delay(500);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  delay(500);

  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  delay(500);

  digitalWrite(13,HIGH);
  delay(2200);
  digitalWrite(13,LOW);
  delay(700);
  
  
}