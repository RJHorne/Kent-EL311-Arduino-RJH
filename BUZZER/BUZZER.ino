int sensorPin = A0;        // select the input pin for the potentiometer
int ledPin2 = 9;          // select the pin for the LED2
int sensorValue = 0;      // variable to store the value coming from A0
int buzzerValue = 8;
void setup() 
{ 
    pinMode(ledPin2, OUTPUT);// declare the LED2 as an output 
    pinMode(buzzerValue, OUTPUT); //declare the Buzzer as an output
}

void loop() 
{              
sensorValue = analogRead(sensorPin);  // read the value from A0:
sensorValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(ledPin2,sensorValue);     // change the LED2 brightness
tone(buzzerValue, sensorValue);  // output buzzer noise
delay(1); 
}
