const int BlueLed = 11;
const int GreenLed = 10;
const int RedLed = 9;
const int buton = 4;

boolean oncekiBtnDurum = LOW;
boolean simdikiBtnDurum = LOW;

int ledModu = 0;

void setup() {
  pinMode(BlueLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
  pinMode(buton, INPUT);
}

boolean butonKontrol(boolean durum) {
  boolean simdikiBtn = digitalRead(buton);
  if (durum != simdikiBtn) {
    delay(5);
    simdikiBtn = digitalRead(buton);
  }
  return simdikiBtn;
}

void rgbAyarla(int renk) {
  
  if (renk == 1) {
    digitalWrite(BlueLed, LOW);
    digitalWrite(GreenLed, LOW);
    digitalWrite(RedLed, HIGH);
  }
  
  else if (renk == 2) {
    digitalWrite(BlueLed, HIGH);
    digitalWrite(GreenLed, LOW);
    digitalWrite(RedLed, LOW);
  }
  
  else if (renk == 3) {
    digitalWrite(BlueLed, LOW);
    digitalWrite(GreenLed, HIGH);
    digitalWrite(RedLed, LOW);
  }
  
  else if (renk == 4) {
    analogWrite(BlueLed, 128);
    analogWrite(GreenLed, 0);
    analogWrite(RedLed, 128);
  }
  
  else if (renk == 5) {
    analogWrite(BlueLed, 128);
    analogWrite(GreenLed, 128);
    analogWrite(RedLed, 0);
  }
  
  else if (renk == 6) {
    analogWrite(BlueLed, 0);
    analogWrite(GreenLed, 128);
    analogWrite(RedLed, 128);
  }
  
  else {
    digitalWrite(BlueLed, LOW);
    digitalWrite(GreenLed, LOW);
    digitalWrite(RedLed, LOW);
  }
}

void loop() {
  simdikiBtnDurum = butonKontrol(oncekiBtnDurum);
  
  if (oncekiBtnDurum == LOW && simdikiBtnDurum == HIGH) {
    ledModu++;
  }
  
  oncekiBtnDurum = simdikiBtnDurum;
  
  if (ledModu == 7) {
    ledModu = 0;
  }
  
  rgbAyarla(ledModu);
}
