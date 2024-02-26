/* Example code for HC-SR501 PIR motion sensor with Arduino. More info: www.www.makerguides.com */

// Define connection pins:
#define pirPin 2
#define ledPin 13

// Create variables:
int val = 0;
//bool motionState = false; // We start with no motion detected.

void setup() {
  // Configure the pins as input or output:
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);

  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Esperar unos segundos para que el sensor se estabilice
  //delay(2000);
}

void loop() {
  int motionState = digitalRead(pirPin);

  // Mostrar el estado del sensor en el monitor serie
  if (motionState == HIGH) {
    //Serial.println("Movimiento detectado");
    Serial.println(motionState);
    digitalWrite(ledPin, HIGH); 
    //delay(2500);
  } else {
    //Serial.println("No hay movimiento");
    Serial.println(motionState);
    digitalWrite(ledPin, LOW);
  }

  // Esperar un momento antes de tomar otra lectura
  delay(1000);
  // // Read out the pirPin and store as val:
  // val = digitalRead(pirPin);


  // // If motion is detected (pirPin = HIGH), do the following:
  // if (val == HIGH) {
  //   digitalWrite(ledPin, HIGH); // Turn on the on-board LED.

  //   // Change the motion state to true (motion detected):
  //   if (motionState == false) {
  //     Serial.println("Motion detected!");
  //     motionState = true;
  //   }
  // }

  // // If no motion is detected (pirPin = LOW), do the following:
  // else {
  //   digitalWrite(ledPin, LOW); // Turn off the on-board LED.

  //   // Change the motion state to false (no motion):
  //   if (motionState == true) {
  //     Serial.println("Motion ended!");
  //     motionState = false;
  //   }
  // }
}