int incommingbyte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:

  if(Serial.available()>0)
  {
    incommingbyte = Serial.read();

    Serial.print("I recived: ");
    //Serial.print(incommingbyte, DEC);
    Serial.print((char)incommingbyte);
  }
}
