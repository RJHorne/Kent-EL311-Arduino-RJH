/**
 * UNIVERISTY OF KENT SAMPLE CODE
 * AUTHOR R.J.HORNE
 * 
 * BASIC ANALOGUE INPUT AND BUZZER OUTPUT
 */

const int sensorPin = A0;     // select the input pin for the potentiometer
const int ledPin2 = 9;        // select the pin for the LED2
const int buzzerPin = 8;      // select the output pin for the buzzer 

int sensorValue = 0;          // variable to store the value coming from A0
int sensorValueMapped = 0;    // variable to store the mapped value of the sensor

void setup() 
{ 
    pinMode(ledPin2, OUTPUT);     // declare the LED2 as an output 
    pinMode(buzzerPin, OUTPUT); //declare the Buzzer as an output
}

void loop() 
{              
sensorValue = analogRead(sensorPin);                    // read the value from A0:
sensorValueMapped = map(sensorValue, 0, 1023, 0, 255);  // Map value from 10bit to 8bit because of ATMEGA328P restrictions
analogWrite(ledPin2,sensorValue);                       // change the LED2 brightness
tone(buzzerPin, sensorValue);                           // output buzzer noise
delay(1); 
}
