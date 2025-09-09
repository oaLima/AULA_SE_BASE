  int btn = 4, ledvm = 2, ledam = 3;

  void setup()
  {
    pinMode(btn, INPUT);
    pinMode(ledvm, OUTPUT);
    pinMode(ledam, OUTPUT);
  }

  void loop()
  {
  	if (digitalRead(btn)==1)
    {
    digitalWrite(ledvm, HIGH);
    delay(1000);
    digitalWrite(ledvm, LOW);
    delay(1000);
    digitalWrite(ledam, HIGH);
    delay(1000);
    digitalWrite(ledam, LOW);
    }
  }