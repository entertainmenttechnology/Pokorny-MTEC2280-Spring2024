/*
  BLINK

  Turns an LED on for one second, then off for one second, in an infinite loop.
  Create LED circuit with LED connected to digital pin 13.

 Modified from Arduino example code:
  http://www.arduino.cc/en/Tutorial/Blink
*/

// Use comments to make your code more readable. 
// Comments get ignored when the program runs.

// pay attention to Punctuation, Spelling, and Capitalization. 
// but Spacing     does not matter.


//creates a constant variable named LED and assign value of 13
const int LED = 13;  

// the setup function runs once at start up
void setup() 
{
  // initialize LED pin as an output.
  pinMode(LED, OUTPUT);    
}

// loop function runs forever
void loop() 
{
  //Turn LED ON for 1 Second
  digitalWrite(LED, HIGH);   // sets LED pin HIGH (sends +5V)
  delay(1000);               // delay program for 1000 milliseconds (1 second)

  //Turn LED OFF for 1 Second
  digitalWrite(LED, LOW);    // sets LED pin LOW (sends 0V)
  delay(1000);               // delay program for 1000 milliseconds (1 second)
}


/* Try modifying the value of the delay functions, 
and re-upload code to your board.
*/
