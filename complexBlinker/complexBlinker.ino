int green = 2;
int yellow = 3;
int red = 4;

void setup()
{
  
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

}

void loop()

{
  for(int i=0 ; i<11 ; i++)
  {
    digitalWrite(green,HIGH);
    digitalWrite(yellow,HIGH);
    delay(100);
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
    delay(100);
  }
  
  for(int i=0 ; i<11 ; i++)
  {
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    delay(100);
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    delay(100);
    
  }
  
  for(int i=0 ; i<11 ; i++)
  {
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    delay(100);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    delay(100);
    
  }
  
  for(int i=0 ; i<11 ; i++)
  {
    digitalWrite(green,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    delay(100);
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
    delay(100);
    
  }

}