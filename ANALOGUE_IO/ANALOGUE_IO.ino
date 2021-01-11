int sensorPin = A0;        // select the input pin for the potentiometer
int ledPin2 = 9;          // select the pin for the LED2
int sensorValue = 0;      // variable to store the value coming from A0

void setup() 
{ 
    pinMode(ledPin2, OUTPUT);// declare the LED2 as an OUTPUT: 
}

void loop() 
{              
sensorValue = analogRead(sensorPin);  // read the value from A0:
sensorValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(ledPin2,sensorValue);     // change the LED2 brightness
delay(1); 
}
