const int BlueLed = 11;  
const int GreenLed = 10; 
const int RedLed = 9;    

void setup() {
  pinMode(BlueLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
}

void loop() {
 
  digitalWrite(BlueLed, LOW);
  digitalWrite(GreenLed, LOW);
  digitalWrite(RedLed, HIGH);
  delay(1000);

 
  digitalWrite(BlueLed, LOW);
  digitalWrite(GreenLed, HIGH);
  digitalWrite(RedLed, LOW);
  delay(1000);

  
  digitalWrite(BlueLed, HIGH);
  digitalWrite(GreenLed, LOW);
  digitalWrite(RedLed, LOW);
  delay(1000);

  
  digitalWrite(BlueLed, HIGH);
  digitalWrite(GreenLed, HIGH);
  digitalWrite(RedLed, HIGH);
  delay(1000);
}
