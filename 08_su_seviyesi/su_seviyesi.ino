const int giris=0; 
int deger=0; 
const int led=2; 

void setup ()
{
  Serial.begin (9600); 
  pinMode (led, OUTPUT) ; 
}

void loop()
{
  
  deger=analogRead (giris);

  if (deger>512)
  {
    digitalWrite (led, HIGH) ; 
    Serial.println ("sivi seviyesi meger:" ) ; 
    Serial.println (deger) ;
  }
  else 
  {
    digitalWrite (led, LOW) ; 
    Serial.println ("sivi seviyesi meger:" ) ; 
    Serial.println (deger) ;
  }
  delay (50) ; 
}
