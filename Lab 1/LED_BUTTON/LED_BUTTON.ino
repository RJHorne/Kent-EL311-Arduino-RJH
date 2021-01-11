/**
   UNIVERISTY OF KENT SAMPLE CODE
   AUTHOR R.J.HORNE

   BASIC VISUAL OUTPUT WITH LED USING A SWITCH TO CONTROL
*/

const int buttonPin = 2;  // the number of the pushbutton pin
const int ledPin =  13;   // the number of the LED pin

// variables will change:
int buttonState = 0;      // variable for reading the pushbutton status

void setup()
{
  pinMode(ledPin, OUTPUT);  // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
}

void loop()
{
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
  if (buttonState == HIGH)  // check if the pushbutton is pressed. If it is, the buttonState // is HIGH:
  {
    digitalWrite(ledPin, HIGH);      // turn LED on:
  }
  else
  {
    digitalWrite(ledPin, LOW);   // turn LED off:
  }
}
