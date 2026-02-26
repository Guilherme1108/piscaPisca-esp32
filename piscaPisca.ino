void setup()
{
  pinMode(13, OUTPUT); //função de pino 23
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}
