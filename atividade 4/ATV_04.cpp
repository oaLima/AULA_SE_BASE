    int sPin = A0;   
	int valorLido = 0;    
	float t = 0;     
	float tC = 0;

  void setup()
  {
     Serial.begin(9600);
  }

  void loop()
  {
  	valorLido = analogRead(sPin);
    t = valorLido * (5.0 / 1023.0);
    tC = (t - 0.5) * 100.0;
     Serial.print("\nTemperatura: ");
  	Serial.print(tC);
  	Serial.println(" *C");
  	delay(2000);
  }