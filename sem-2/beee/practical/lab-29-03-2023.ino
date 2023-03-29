// c++ code
//
int S = 0;

void setup()
{
  pinMode(6, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop()
{
  S = digitalRead(6);
  Serial.println(S);
  if (S == 1) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(00); // Delay a little bit to improve simulation performance
}
