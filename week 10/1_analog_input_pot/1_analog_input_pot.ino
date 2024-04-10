/*
  Analog sensor input with a potentiomenter 
  controlling PWM output to an LED.
  
  Connect potentiometer middle pin to Analog A0. Connect one outer pin to ground, the other to 5V.
  Connect LED (annode side) to PWM pin 11. Connect cathode side to current limiting resistor, then to ground.
*/

const int LED = 11;  //LED pin
const int potPin = A0;  //potentiometer middle pin
int reading = 0; // to track potentiometer reading

void setup() 
{
  pinMode (LED, OUTPUT);  // initialize LED pin as digital output

  //NOTE: no need to initialize analog inputs as those pins can only be inputs
  
  Serial.begin(115200);  // initialize serial communication at 
}

void loop() 
{
  reading = analogRead(potPin);     // reads pot 0 to 1023            
  analogWrite (LED, reading/4);  // reduces value to match PWM output range 0-255

//comment and uncomment ONE of these below
  Serial.println (reading / 4);  // prints to Serial monitor
  //Serial.write(reading / 4); //sends binary data to Serial port

}
