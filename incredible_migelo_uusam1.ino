int red = 4;
int yellow = 3;
int green = 2;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
   digitalWrite(red,HIGH);
   delay(800);
   digitalWrite(yellow,HIGH);
   delay(400);
   digitalWrite(yellow,LOW);
   delay(400);
  digitalWrite(yellow,HIGH);
  delay(400);
  digitalWrite(yellow,LOW);
   delay(400);
  digitalWrite(yellow,HIGH);
  delay(400);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
   digitalWrite(green,HIGH);
  delay(600);
  digitalWrite(green,LOW);
  delay(600);
}