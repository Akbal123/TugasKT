int analogInPin = A2;  
int led1 = 5;
int sensorValue = 0;      

void setup() {
Serial.begin(9600); 
pinMode(led1, OUTPUT);
}

void loop() {
sensorValue = analogRead(analogInPin);       
if (sensorValue >=125)
  {
    digitalWrite(led1, HIGH);
  }
  else (sensorValue <=36)
;  {
    digitalWrite(led1, LOW);
  }
 }
