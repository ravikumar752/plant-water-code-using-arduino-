const int analogInPin = A5; //Sensor pin 
int relay = 2;  //Relay Pin 
int sensorValue = 0;        
int outputValue = 0;        
void setup() {
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
}
void loop() {
sensorValue = analogRead(analogInPin); //Read sesnor value
Serial.print("sensor = ");
Serial.println(sensorValue); //Display the sensor value in serial monitor 
 if (sensorValue >= 350)  
{
  digitalWrite(relay,HIGH); //Relay ON
}
else if (sensorValue <= 250)
{
  digitalWrite(relay,LOW); //Relay OFF
}
}
