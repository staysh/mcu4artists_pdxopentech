
int led = 13;
int counter = 0;
bool ledState = LOW;


void setup() {

  pinMode(led, OUTPUT);

}

void loop() {

  if(millis() - counter > 1000){
  
    ledState = !ledState;
    digitalWrite(led, ledState);
    counter = millis();
    
  }


}
