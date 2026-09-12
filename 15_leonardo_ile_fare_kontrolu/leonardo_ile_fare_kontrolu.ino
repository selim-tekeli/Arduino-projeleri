#include <Mouse.h>

const int solButon = 6; 
const int ortaButon = 5; 
const int sagButon = 4; 
const int xEkseni = 0; 
const int yEkseni = 1; 

void setup() {
  Mouse.begin(); 
}

void loop() {
  int yKoord = joystickOku(yEkseni); 
  int xKoord = joystickOku(xEkseni); 
  Mouse.move(xKoord, yKoord, 0); 
  butonOku(solButon, MOUSE_LEFT); 
  butonOku(sagButon, MOUSE_RIGHT); 
  butonOku(ortaButon, MOUSE_MIDDLE); 
  delay(5);
}

int joystickOku(int eksen) {
  int deger = analogRead(eksen);
  deger = map(deger, 0, 1023, -10, 10);

  if (deger <= 2 && deger >= -2) 
    return 0;
  else
    return deger;
}


void butonOku(int pin, char mouseKomut) {
  if (digitalRead(pin) == HIGH) 
  {
    if (!Mouse.isPressed(mouseKomut)) {
      Mouse.press(mouseKomut); 
    }
  } 
  else 
  {
    if (Mouse.isPressed(mouseKomut)) {
      Mouse.release(mouseKomut); 
    }
  }
}
