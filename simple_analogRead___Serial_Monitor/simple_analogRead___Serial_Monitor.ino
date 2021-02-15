/*
                         _..._             _____                
                    .-'_..._''.         /    /                
 __  __   ___     .' .'      '.\       /    /                 
|  |/  `.'   `.  / .'                 /    /                  
|   .-.  .-.   '. '                  /    /                   
|  |  |  |  |  || |                 /    /  __         __     
|  |  |  |  |  || |                /    /  |  |     .:--.'.   
|  |  |  |  |  |. '               /    '   |  |    / |   \ |  
|  |  |  |  |  | \ '.          . /    '----|  |---.`" __ | |  
|__|  |__|  |__|  '. `._____.-'//          |  |   | .'.''| |  
                    `-.______ / '----------|  |---'/ /   | |_ 
                             `             |  |    \ \._,\ '/ 
                                          /____\    `--'  `"  
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +3V3 and ground.

  This is a great starting point for testing most analog sensors

  Important: Teensy pins are not 5V tolerant. So be sure to power all sensors with 3V3 pins

  This example code is in the public domain.

*/

// the setup routine runs once when you press reset:

void setup() {
  
  // In "Tools" menu above, scroll down to USB Type > select Serial
  // initialize serial communication 9600 is a common bitrate:
   
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:

void loop() {
  
  // read the input (analog voltage level) on analog pin 0:
  
  int sensorValue = analogRead(A0);
  
  // print out the value you read:
  
  Serial.println(sensorValue);
  
  delay(10);        // delay in between reads for stability
  
}

/**********************************************************
 * If you get an error, "serial was not defined in this scope"
 * double check Tools > USB Type that Serial is selected
 * To view the printed sensor value open the Serial Monitor
 * Tools > Serial Monitor, you shoud see a rush of numbers from 0 - 1023
 ***********************************************************************/
 */
