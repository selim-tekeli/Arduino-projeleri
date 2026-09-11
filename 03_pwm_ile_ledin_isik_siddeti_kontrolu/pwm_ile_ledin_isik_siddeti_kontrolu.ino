const int Led = 2;    
const int Buton = 4;  

void setup() {
  pinMode(Led, OUTPUT);   
  pinMode(Buton, INPUT);  
}

void loop() {
  
  if (digitalRead(Buton) == HIGH) {
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }
}