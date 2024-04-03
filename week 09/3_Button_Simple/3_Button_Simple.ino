/*
  PushButton - Continuous Press

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground with "CURRENT-LIMITING RESISTOR".
  - LED Resistor value should be no less than 220 ohms
  - The smaller the resistor value used, the brighter the LED will be
  - PushButton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground (PULL-DOWN RESISTOR)

  Slightly modified from Arduino IDE example code in the public domain:
  http://www.arduino.cc/en/Tutorial/Button
*/

// declare constant integer variables for pins (will not change)
// creates variable called buttonPin and assigns value of 2
const int buttonPin = 2;   

// creates variable called LED and assigns value of 13
const int LED =  13;      

// declare integer variable that change over time
// creates variable to track buttonState, assigns initial value of 0
int buttonState = 0;         

// setup runs once at startup
void setup() 
{
  pinMode(LED, OUTPUT);       // initialize LED pin as an output.
  pinMode(buttonPin, INPUT);  // initialize pushbutton pin as an input.
}

// loop runs infinitely
void loop() 
{
  buttonState = digitalRead(buttonPin);    // read the state of the pushbutton value
  delay (10); //small delay for debouncing, to increase accuracy

  // Conditional Statement

  //if button is pressed (reading 5V on pin 2)...
  if (buttonState == HIGH) 
  {
    //then turn on LED
    digitalWrite(LED, HIGH);
  } 
  else 
  {
    //otherwise, no voltage is read on pin 2, turn off LED
    digitalWrite(LED, LOW);
  }

}
