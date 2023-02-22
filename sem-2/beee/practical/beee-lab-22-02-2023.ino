int ledpin=7; 
void setup()
{
  pinMode(ledpin,OUTPUT); //used to describe whether device is acting as input or output 
}

void loop()
{
  digitalWrite(ledpin, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}             
