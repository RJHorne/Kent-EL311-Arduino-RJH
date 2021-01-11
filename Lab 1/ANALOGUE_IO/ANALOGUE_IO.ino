/**
 * UNIVERISTY OF KENT SAMPLE CODE
 * AUTHOR R.J.HORNE
 * 
 * BASIC ANALOGUE INPUT AND VISUAL OUTPUT
 */
 
const int sensorPin = A0;          // select the input pin for the potentiometer
const int ledPin2 = 9;             // select the pin for the LED2

int sensorValue = 0;         // variable to store the value coming from A0

void setup() 
{ 
    pinMode(ledPin2, OUTPUT);// declare the LED2 as an OUTPUT: 
}

void loop() 
{              
sensorValue = analogRead(sensorPin);              // read the value from A0:
sensorValue = map(sensorValue, 0, 1023, 0, 255);  // Map value from 10bit to 8bit because of ATMEGA328P restrictions
analogWrite(ledPin2,sensorValue);                 // change the LED2 brightness
delay(1); 
}
