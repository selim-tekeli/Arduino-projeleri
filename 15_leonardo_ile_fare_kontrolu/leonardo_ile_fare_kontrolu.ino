#include <Keyboard.h>

const int ldr = 1; 
const int SinirDeger = 200; 
void setup() {
  Keyboard.begin(); 
}

void loop() {
  int sensorDeger = analogRead(ldr); 
  
  
  if (sensorDeger < SinirDeger) {
    Keyboard.press(KEY_LEFT_GUI); 
    Keyboard.press('l');         
    delay(100);
    Keyboard.releaseAll();       
  }
}
