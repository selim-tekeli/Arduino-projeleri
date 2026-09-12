const int kirmizi=11;
const int yesil=10;
const int mavi=9;

int kDeger=0;
int yDeger=0;
int mDeger=0;

void setup()
{
  Serial.begin(9600);
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);
}

void loop()
{
  while(Serial.available()>0) 
  {
    kDeger=Serial.parseInt();
    yDeger=Serial.parseInt();
    mDeger=Serial.parseInt();

    if(Serial.read()=='\n')
    {
      analogWrite(kirmizi,kDeger);
      analogWrite(yesil,yDeger);
      analogWrite(mavi,mDeger);
    }
  }
}
