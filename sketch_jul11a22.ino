// C++ code
//
int red=7;
int yellow=4;
int green=2;
int sw=1;
int i=0,counter=0;
int reading=0;

void setup()
{
  pinMode(i,OUTPUT);
  pinMode(sw,INPUT);
}

void loop()
{
  i=digitalRead(sw);
  if(i==HIGH)
  {
    if(counter==0){digitalWrite(red,1);
                   counter=1;
                   delay(150);}
    else
      if(counter==1){digitalWrite(yellow,2);
                     counter=2;
                     delay(150);}
     else
       if(counter==2){digitalWrite(green,3);
                      counter=3;
                      delay(150);}
    else
      if(counter==3){digitalWrite(red,0);
                     digitalWrite(yellow,0);
                     digitalWrite(green,0);}
    
  }  
}
