void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);//GREEN
  pinMode(11, OUTPUT);//YELLOW
  pinMode(9, OUTPUT); //RED

}

void red_yellow(){
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);
  digitalWrite(11,HIGH);
  delay(1000);                       // wait 
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(11, LOW);                       // wait   
}

void yellow(){
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait 
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
                        // wait   
}
void green(){
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait 
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
                      // wait   
}


void loop() {
  // put your main code here, to run repeatedly:

  red_yellow();
  delay(1);
  
  green();
  delay(1);
  yellow();
  delay(1);
  
  
  
}
