/*
  PushButton - Continuous Press

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2 with internal pull-up resistor.

  The circuit:
  - LED attached from pin 13 to ground with "CURRENT-LIMITING RESISTOR".
  - LED CURRENT-LIMITING RESISTOR must be greater than or equal to 220 ohms.
  - PushButton attached to pin 2 from GND
*/

// declare constant integer variables for pins (will not change)
// creates variable called buttonPin and assigns value of 2
const int buttonPin = 2;   

// creates variable called LED and assigns value of 13
const int LED =  13;      

// declare variable that changes over time
// creates variable to track buttonState, assigns initial value of 0
bool buttonState = 0;         

// setup runs once at startup
void setup() 
{
  // initialize LED pin as an output.
  pinMode(LED, OUTPUT);       

  // initialize pushbutton pin with internal pull-up resistor.
  pinMode(buttonPin, INPUT_PULLUP);  

  Serial.begin(115200);
}

// loop runs infinitely
void loop() 
{
  buttonState = digitalRead(buttonPin);    // read pushbutton state
  /*NOTE: when using Pull-Up resistor, button logic is inverted:
    Button Pressed = 0 or LOW
    Button Not Pressed = 1 or HIGH
  */

  delay (10); //small delay for debouncing, to increase accuracy

  // Conditional Statement

  //if button is pressed (reading 0V on pin 2)...
  if (!buttonState) // if buttonState is NOT TRUE, aka equal to 0.
  {
    //then turn on LED
    Serial.println(buttonState);
    digitalWrite(LED, HIGH);
  } 
  else 
  {
    //otherwise, no voltage is read on pin 2, turn off LED
    digitalWrite(LED, LOW);
  }
}

/* 
More info...

The "!buttonState" above is a Logical NOT Operator:
https://www.arduino.cc/reference/en/language/structure/boolean-operators/logicalnot/
*/
