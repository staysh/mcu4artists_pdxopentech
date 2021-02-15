/*
  Blink Improved
  Turns on an LED on for one second, then off for one second, repeatedly.
  But this time without forcing the mcu to sit idle

  This example code is in the public domain.
  Edited by Station for mcu4artists
 */

// Pin 13 has the LED on Teensy 3.0 and LC
// Create the variable "led" and assign it the value of the pin number

int led = 13;

//We need a variable to store the time since the last blink
//we'll name the variable counter and start it at 0

int counter = 0;

//We will also introduce a "trick" you can do with a boolean variable

bool ledState = LOW;

// the setup routine runs once when you press start or reset:

void setup() {

  // initialize the digital pin (13) as an output.
  pinMode(led, OUTPUT);

}

// the loop routine runs over and over again forever:

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}

/*
 * Note: the mcu does NOTHING during delay() calls
 * Do you see a problem here? This seems very impractical
 * for general use... We'll develop this next sketch 
 * with the use of timers
 */
