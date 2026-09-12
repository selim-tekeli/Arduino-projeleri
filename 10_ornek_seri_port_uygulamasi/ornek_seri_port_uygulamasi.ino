const int pot = 0; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int deger = analogRead(pot);
  
  int yuzdelikDeger = map(deger, 0, 1023, 0, 100);
  Serial.print("okunan veri:");
  Serial.print(deger);
  Serial.print("yuzdelik deger:");
  Serial.print("%");
  Serial.println(yuzdelikDeger);
  delay(500);
}
