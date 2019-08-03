void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(13,HIGH);
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  Serial.println(digitalRead(12));
 if ( digitalRead(12)== 0)
 {
  if (sensorValue >=200)
  {
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
    digitalWrite(9, LOW);
  }

  if (sensorValue >=300)
  {
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
  }
  if (sensorValue >=350)
  {
    digitalWrite(6, HIGH);
    digitalWrite(10, HIGH);
  }
  else
  {
    digitalWrite(6, LOW);
    digitalWrite(10, LOW);
  }
  if (sensorValue >=370)
  {
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
  }
   else
  {
    digitalWrite(7, LOW);
    digitalWrite(11, LOW);
  }
  delay(1);
}
else{
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(11, LOW);
    delay(100) ;  
    digitalWrite(6, HIGH);
    digitalWrite(10, HIGH);
    delay(100);
     digitalWrite(6, LOW);
    digitalWrite(10, LOW);
    delay(100);
     digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    delay(100);
     digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    delay(100);
     digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
    delay(100);
     digitalWrite(4, LOW);
    digitalWrite(9, LOW);
    delay(100);
  }        
}
