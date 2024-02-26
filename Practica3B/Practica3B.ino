// Definir los pines para el sensor ultrasónico
const int trigPin = 12;
const int echoPin = 11;

// Definir variables para la duración del pulso y la distancia
long duration;
int distance;

void setup() {
  // Inicializar el puerto serie
  Serial.begin(9600);

  // Definir los pines como entrada o salida
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Limpiar el pin de activación del sensor ultrasónico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Generar un pulso de activación para el sensor ultrasónico
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leer la duración del pulso de eco del sensor ultrasónico
  duration = pulseIn(echoPin, HIGH);

  // Convertir la duración a distancia (en centímetros)
  distance = duration * 0.034 / 2;

  // Mostrar la distancia medida en el monitor serie
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Esperar un poco antes de tomar otra medición
  delay(500);
}
