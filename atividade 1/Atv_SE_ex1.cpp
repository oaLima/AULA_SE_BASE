int ledvm = 2, ledam = 3,ledvd = 4;

void setup()
{
  pinMode(ledvm, OUTPUT);
  pinMode(ledam, OUTPUT);
  pinMode(ledvd, OUTPUT);
}

void loop()
{
  digitalWrite(ledvm, HIGH);
  delay(1000);
  digitalWrite(ledvm, LOW);
  delay(1000);
  digitalWrite(ledam, HIGH);
  delay(1000);
  digitalWrite(ledam, LOW);
  delay(1000);
  digitalWrite(ledvd, HIGH);
  delay(1000);
  digitalWrite(ledvd, LOW);
}