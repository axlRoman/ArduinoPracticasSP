// C++ code
//
void setup()
{
  //initialize serial communication at 9600 bits per second
  Serial.begin(9600); //Se llaman baudios
}

void loop()
{
  //read the input on analog pin 0:
  //pin analogo 0 1023
  int sensorValue = analogRead(A0);
  //print out the value you read:
  Serial.println(sensorValue);
  delay(200); //delay in between reads for stability
  
}