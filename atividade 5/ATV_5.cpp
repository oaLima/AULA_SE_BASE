    int ldrPin = A0;   
	int relePin = 2;     
	int valorLDR = 0;

	void setup() {
  	pinMode(relePin, OUTPUT);
  	Serial.begin(9600);
	}

	void loop() {
  	valorLDR = analogRead(ldrPin);  
  	Serial.print("LDR: ");
  	Serial.println(valorLDR);

  
  	if (valorLDR < 500) {   
    	digitalWrite(relePin, HIGH); 
  	} else {
    	digitalWrite(relePin, LOW);  
  	}

  	delay(500);
	}
