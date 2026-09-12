const int POT=0; 
int deger=0; 

void setup ()
{
  Serial.begin(9600) ; 
}

void loop ()
{
  deger=analogRead (POT) ; 
  Serial.println (deger) ; 
  delay (500) ; 
}
