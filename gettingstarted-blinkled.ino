

int led1 = D6; // Instead of writing D0 over and over again, we'll write led1


int led2 = D7; // Instead of writing D7 over and over again, we'll write led2


void setup() {


	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}


void loop() {
	// To blink the LED, first we'll turn it on...
	
	//Eric
	//E
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);


	delay(1000);

	// Then we'll turn it off...
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	// Wait 1 second...
	delay(1000);

    //r
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
		
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(2000);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(1000);
	
	//i
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
		
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(1000);
	
	//c
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(2000);
		
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
		
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(2000);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(5000);
		
	
	
	// And repeat!
}
