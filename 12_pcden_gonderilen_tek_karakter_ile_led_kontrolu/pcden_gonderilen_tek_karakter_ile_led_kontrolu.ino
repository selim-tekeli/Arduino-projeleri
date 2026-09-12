const int led=9; 
char data ; 

void setup()
{
  Serial.begin(9600) ;
  pinMode(led,OUTPUT) ;
}

void loop()
{
  
  if(Serial.available() >0)
  {
    data=Serial.read() ; 
    if(data=='1')
    {
      digitalWrite (led,HIGH) ;
      Serial.println("Led acik") ;
    }
    else if (data=='0')
    {
      digitalWrite (led,LOW) ;
      Serial.println("Led Kapali") ;
    }
  }
}
