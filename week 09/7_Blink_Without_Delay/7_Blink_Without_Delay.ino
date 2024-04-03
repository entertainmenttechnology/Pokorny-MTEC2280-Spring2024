/*
BLINK without Delay - a basic Software Timer

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. 
  This means that other code can run at the SAME TIME (WOW!) without being interrupted by the LED code.
  If we used delay(), our entire code would have to wait until delay() was over before continuing to run, essentially "locking up" the processor for a given amount of time.


Modified from this example code in the public domain:
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/BlinkWithoutDelay
*/

// Constants won't change.
const int LED = 13;   // LED pin
const long interval = 250;  // interval at which to blink (in milliseconds)

// Variables will change:
bool ledState = 0;  // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;  // will store last time LED was updated

void setup() 
{
  pinMode(LED, OUTPUT);   //set LED pin as output
}

  /* 
  Is the difference between the current time and last time you blinked the LED bigger than the interval at which you want to blink the LED?

  In other words, has a certain amount of time passed since last event?
  
  millis() returns the current amount of milliseconds since the Arduino was powered on. We can use millis() just like a timer or stopwatch in our loop().
  */

void loop() 
{
  unsigned long currentMillis = millis(); // record Current Time 

  // if Current Time minus Previous Time is greater than or equal to Interval...
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis; //record time when LED update occurs

    // using logical NOT to switch ledState (if ON, turn OFF, and vice-versa)
    ledState = !ledState;

    digitalWrite(LED, ledState); //set LED based on current LED state
  }
}
