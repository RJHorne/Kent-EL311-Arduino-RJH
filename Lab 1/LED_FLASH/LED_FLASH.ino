/**
   UNIVERISTY OF KENT SAMPLE CODE
   AUTHOR R.J.HORNE

   BASIC VISUAL OUTPUT WITH LED WITH 1S DELAY
*/

// constants won't change. They're used here to set pin numbers:
const int ledPin =  13;   // the number of the LED pin

void setup()
{
  pinMode(ledPin, OUTPUT);   // initialize digital pin 13 as an output.
}

void loop()
{
  digitalWrite(ledPin, HIGH);           // turn the LED on HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

}
