const int ledPinA = 3;
const int ledPinB = 4;
const int ledPinC = 5;
const int ledPinD = 6;
const int ledPinE = 7;
const int ledPinF = 8;
const int ledPinG = 9;

int temperaturePin = A0;
int photocellPin = A5;
const int lightThreshold = 810;

void setup()
{
	// Set up 1x7 for output
	pinMode(ledPinA, OUTPUT);
	pinMode(ledPinB, OUTPUT);
	pinMode(ledPinC, OUTPUT);
	pinMode(ledPinD, OUTPUT);
	pinMode(ledPinE, OUTPUT);
	pinMode(ledPinF, OUTPUT);
	pinMode(ledPinG, OUTPUT);
	turnoff_all();
}

void loop()
{
	unsigned int lightOutput = analogRead(photocellPin);
	if(lightOutput > lightThreshold)
	{
		// Read temp
		int temperature = analogRead(temperaturePin);
		float millivolts = (temperature / 1024.0) * 5000;
		float celsius = millivolts / 10;
		
		int fahrenheit = (celsius * 9)/ 5 + 32;
		if(fahrenheit < 100)
		{
			String fahrenheit_str = String(fahrenheit);
			// Display temp
			for(int x = 0; x < fahrenheit_str.length(); x++)
			{
				switch(fahrenheit_str[x]) {
					case '0':
						display_0();
						break;
					case '1':
						display_1();
						break;
					case '2':
						display_2();
						break;
					case '3':
						display_3();
						break;
					case '4':
						display_4();
						break;
					case '5':
						display_5();
						break;
					case '6':
						display_6();
						break;
					case '7':
						display_7();
						break;
					case '8':
						display_8();
						break;
					case '9':
						display_9();
						break;
				}
				delay(2000);
				turnoff_all();
			}
			display_F();
			delay(2000);
			turnoff_all();
		}
	}
	delay(10000);
}

void display_0()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinC, HIGH);
	digitalWrite(ledPinD, HIGH);
	digitalWrite(ledPinE, HIGH);
	digitalWrite(ledPinF, HIGH);
}

void display_1()
{
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinC, HIGH);
}

void display_2()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinG, HIGH);
	digitalWrite(ledPinE, HIGH);
	digitalWrite(ledPinD, HIGH);
}

void display_3()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinG, HIGH);
	digitalWrite(ledPinC, HIGH);
	digitalWrite(ledPinD, HIGH);
}

void display_4()
{
	digitalWrite(ledPinF, HIGH);
	digitalWrite(ledPinG, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinC, HIGH);
}

void display_5()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinF, HIGH);
	digitalWrite(ledPinG, HIGH);
	digitalWrite(ledPinC, HIGH);
	digitalWrite(ledPinD, HIGH);
}

void display_6()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinF, HIGH);
	digitalWrite(ledPinE, HIGH);
	digitalWrite(ledPinD, HIGH);
	digitalWrite(ledPinC, HIGH);
	digitalWrite(ledPinG, HIGH);
}

void display_7()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinC, HIGH);
}

void display_8()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinC, HIGH);
	digitalWrite(ledPinD, HIGH);
	digitalWrite(ledPinE, HIGH);
	digitalWrite(ledPinF, HIGH);
	digitalWrite(ledPinG, HIGH);
}

void display_9()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinB, HIGH);
	digitalWrite(ledPinC, HIGH);
	digitalWrite(ledPinF, HIGH);
	digitalWrite(ledPinG, HIGH);
}

void display_F()
{
	digitalWrite(ledPinA, HIGH);
	digitalWrite(ledPinE, HIGH);
	digitalWrite(ledPinF, HIGH);
	digitalWrite(ledPinG, HIGH);
}

void turnoff_all()
{
	digitalWrite(ledPinA, LOW);
	digitalWrite(ledPinB, LOW);
	digitalWrite(ledPinC, LOW);
	digitalWrite(ledPinD, LOW);
	digitalWrite(ledPinE, LOW);
	digitalWrite(ledPinF, LOW);
	digitalWrite(ledPinG, LOW);
}
