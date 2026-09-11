#include <SoftwareSerial.h>

int led = 13;
SoftwareSerial BTSerial(10, 11);


byte okunan = 0;
int key = 9;

void setup() {
  BTSerial.begin(9600);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(key, OUTPUT);
  digitalWrite(key, LOW);
  
}

void loop() {
  
  

  while (BTSerial.available()) {
    okunan = BTSerial.read(); 
    if (okunan == '0') 
    {
      
      digitalWrite(led, LOW);
      Serial.println("led kapali");
    }
    else if (okunan == '1') 
    {
      
      digitalWrite(led, HIGH);
      Serial.println("led acik");
    }
    delay(50);
  }
}