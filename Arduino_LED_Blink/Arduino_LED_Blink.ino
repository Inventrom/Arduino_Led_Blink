#include <BoltIoT-Arduino-Helper.h>


#define TURN_ON_COMMAND  "TurnOn"
#define TURN_OFF_COMMAND "TurnOff"

#define LED_PIN       LED_BUILTIN

String turnOnLed(String *data){
  digitalWrite(LED_PIN,HIGH);
  return "Led turned on";
}
String turnOffLed(String *data){
  digitalWrite(LED_PIN,LOW);
  return "Led turned off";
}

void setup() {
  boltiot.setCommandString(TURN_ON_COMMAND,turnOnLed);
  boltiot.setCommandString(TURN_OFF_COMMAND,turnOffLed);
  boltiot.begin(Serial);
  // put your setup code here, to run once:

}

void loop() {
  boltiot.handleCommand();
  // put your main code here, to run repeatedly:

}
