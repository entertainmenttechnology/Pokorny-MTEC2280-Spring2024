// DEMO FOR SENDING SERIAL DATA FROM ARDUINO TO PROCESSING
// READS ANALOG SENSOR AND WRITES VALUE TO SERIAL PORT 

const int SENSOR = A0; //sensor hooked up to analog pin A0
int val = 0;

void setup() 
{
  Serial.begin(115200); // Start serial communication
}

void loop() 
{
  val = analogRead(SENSOR); //read sensor and assign to variable called val
  val = val / 4; //divide val by 4 or remap values to get byte-sized 0-255

  delay(50);

  /*
    NOTE: Uncomment Serial.print() OR Serial.write(), but not both!
  */
  
  //Serial. println(val); //to send human-readable data to Arduino monitor
  Serial.write(val);  //to send binary data to Processing
}
