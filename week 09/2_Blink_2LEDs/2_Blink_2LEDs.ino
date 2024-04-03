/*
  BLINK - 2 LEDs
  Connect LEDs to digital pins 12 and 13.
*/

const int LED1= 12;  // creates variable called LED1 and assigns value of 12
const int LED2= 13;  // creates variable called LED2 and assigns value of 13

// the setup function runs once at start up
void setup() 
{
  pinMode(LED1, OUTPUT);    // initialize pin as an output.
  pinMode(LED2, OUTPUT);    
}

// loop function runs forever
void loop() 
{
  //Turn LED1 ON for 1 Second
  digitalWrite(LED1, HIGH);   
  delay(1000);
  //Turn LED1 OFF for 1 Second              
  digitalWrite(LED1, LOW);    
  delay(1000);
  //Turn LED2 ON for 1 Second          
  digitalWrite(LED2, HIGH);   
  delay(2000);         
  //Turn LED2 OFF for 1 Second      
  digitalWrite(LED2, LOW);    
  delay(2000);               
}

/* Try modifying the value of the delay functions, 
and re-upload code to your board.
*/
