#include <Ultrasonic.h>

Ultrasonic ultrasonikSensor(12, 13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Engele Olan mesafe: ");
  Serial.print(ultrasonikSensor.distanceRead());
  
  Serial.println("cm");
  delay(500);
}


