void setup()
{
// initialize serial communication:
Serial.begin(9600);
// initialize the LED pins:
for (int thisPin = 2; thisPin < 7; thisPin++)
{
pinMode(thisPin, OUTPUT);
}
}

void loop()
{
// read the sensor:
  if (Serial.available() > 0)
  {
  int charecter = Serial.read();

    switch (charecter)
    {
    case 'b':
    digitalWrite(3, HIGH);
    break;
    case 'g':
    digitalWrite(5, HIGH);
    break;
    case 'r':
    digitalWrite(6, HIGH);
    break;
    
    default:
    // turn all the LEDs off:
    for (int thisPin = 2; thisPin < 7; thisPin++)
    {
    digitalWrite(thisPin, LOW);
    }
  }
}
}
