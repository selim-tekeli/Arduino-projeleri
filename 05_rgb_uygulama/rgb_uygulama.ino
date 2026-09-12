const int Led=2; 
const int Buton=4; 
boolean oncekiDurum=LOW; 
boolean simdikiDurum=LOW; 
boolean ledAcikmi=false; 

void setup()
{
  pinMode(Led, OUTPUT); 
  pinMode(Buton, INPUT); 
}

boolean butonKontrol(boolean sonBtnDgr) 
{
  boolean simdiki=digitalRead(Buton); 
  if(sonBtnDgr!=simdiki) 
  {
    delay(5); 
    simdiki=digitalRead(Buton); 
    return simdiki; 
  }
}

void loop()
{
  
  simdikiDurum=butonKontrol(oncekiDurum);
  
  if(oncekiDurum==LOW && simdikiDurum==HIGH)
  { 
    ledAcikmi= !ledAcikmi; 
  }
  oncekiDurum=simdikiDurum;
  digitalWrite(Led, ledAcikmi); 
}
