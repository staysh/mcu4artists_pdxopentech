/*
  Blink Improved
  Turns on an LED on for one second, then off for one second, repeatedly.
  But this time without forcing the mcu to sit idle

  This example code is in the public domain.
  Edited by Station for mcu4artists
 */

/* Pin 13 has the LED on Teensy 3.0 and LC
 * Create the variable "led" and assign it the value of the pin number
 */
int led = 13;

/* We need a variable to store the time since the last blink
 * we'll name the variable counter and start it at 0
 */
int counter = 0;

/* We will also introduce a "trick" you can do with a boolean variable
 * booleans typically store only two values TRUE and FALSE..
 * However, LOW and HIGH also work because both of these equate to
 * logical values, 0 and 1
 */
bool ledState = LOW;

// the setup routine runs once when you press start or reset:

void setup() {

  // initialize the digital pin (13) as an output.
  pinMode(led, OUTPUT);

}

// the loop routine runs over and over again forever:

void loop() {

//  This code is left for reference, but we'll "comment it out"
//  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);               // wait for a second
//  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);               // wait for a second

/*****************************************************************
 START BLINK IMPROVED (For clarity comments are left til the end)
*****************************************************************/

  if(millis() - counter > 1000){
  
    ledState = !ledState;
    digitalWrite(led, ledState);
    counter = millis();
    
  }


}

/****************************************************************
 * The code between the braces {} after the "if" statement will only
 * 
 * run if the expression evaluates to TRUE. So, what are we evaluating?
 * 
 * millis will reach 1000 in 1 second (1 second = 1000 millis)
 * 
 * After that, mills - 0 will be greater than 1000 so the code will execute
 * 
 * we "toggle" our TRUE/FALSE variable 
 * 
 * an ! before a boolean means "NOT" whatever that variable is
 * 
 * (NOT)TRUE is FALSE... So we store the opposite of what the variable is
 * 
 * Next we update the state of the pin "led" with that toggled value
 * 
 * Why the last line? counter = millis()?
 * 
 * well, in about light speed our loop function is going to run again
 * 
 * and millis() - 0 will be great than 1000 for the rest of time
 * 
 * we need to update counter to "now" so the code wont run for 
 * 
 * another 1000 milliseconds
 * 
 * Note: have you noticed all the ways to "comment" code?
 * 
 * We understand it can get kinda busy, so check out the version
 * 
 * without comments to get a better picture of the code
 * 
 */
