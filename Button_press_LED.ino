int LED = 5;
int Button = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);//GREEN
  pinMode(Button, INPUT_PULLUP);//Button
  Serial.begin(9600);
}

int LEDstate = 0;
int state = 0;

void loop() 
{
  // put your main code here, to run repeatedly: 

  if(digitalRead(Button)==false && state == 0)
    {
       state=1;
       delay(100);
    }
    
    if(digitalRead(Button)==false && state == 1)
    {
       state=0;
       delay(100);
    }
   
  
 if(state==1)
 {
  digitalWrite(LED,HIGH)  ;
  //delay(200);
 }
 if(state==0)
 {
  digitalWrite(LED,LOW) ;
  //delay(200);
 }
delay(200);
}
