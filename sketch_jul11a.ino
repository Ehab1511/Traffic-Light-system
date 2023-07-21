int led=3;
  int sw=7;
int reading;
void setup()
{
  pinMode(led,OUTPUT);
    pinMode(sw,INPUT);
}

void loop(){
  reading=digitalRead(sw);
  if(reading==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  
}
