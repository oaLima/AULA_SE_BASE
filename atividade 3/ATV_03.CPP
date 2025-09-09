int ledvm = 9;
  int ledaz = 10;
  int ledvd = 11;

  void setup()
  {
    pinMode(ledvm, OUTPUT);
    pinMode(ledaz, OUTPUT);
    pinMode(ledvd, OUTPUT);
  }

  void loop()
  {
  	digitalWrite(ledvm, HIGH);
    delay(1000);
    digitalWrite(ledvm, LOW);
    delay(1000);
    digitalWrite(ledaz, HIGH);
    delay(1000);
    digitalWrite(ledaz, LOW);
    delay(1000);
    digitalWrite(ledvd, HIGH);
    delay(1000);
    digitalWrite(ledvd, LOW);
    delay(1000);
    digitalWrite(ledvm, HIGH);
    digitalWrite(ledaz, HIGH);
    delay(1000);
    digitalWrite(ledvm, LOW);
    digitalWrite(ledaz, LOW);
    delay(1000);
    digitalWrite(ledvm, HIGH);
    digitalWrite(ledvd, HIGH);
    delay(1000);
    digitalWrite(ledvm, LOW);
    digitalWrite(ledvd, LOW);
    delay(1000);
    digitalWrite(ledaz, HIGH);
    digitalWrite(ledvd, HIGH);
    delay(1000);
    digitalWrite(ledaz, LOW);
    digitalWrite(ledvd, LOW);
    delay(1000);
    digitalWrite(ledvm, HIGH);
    digitalWrite(ledaz, HIGH);
    digitalWrite(ledvd, HIGH);
    delay(1000);
    digitalWrite(ledvm, LOW);
    digitalWrite(ledaz, LOW);
    digitalWrite(ledvd, LOW);
  }