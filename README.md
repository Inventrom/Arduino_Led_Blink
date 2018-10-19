# Arduino_Led_Blink
This projects shows how to write a code to blink the LED on an Arduino, using Bolt remote serial API.

To setup the project follow these steps:
* Click <a href=https://github.com/Inventrom/boltiot-arduino-helper/archive/master.zip>here</a> to download the BoltIoT-Arduino-Helper library
* In the Arduino IDE go to ```Sketch->Include Library->Add .Zip library```, select the zip file downloaded in the earlier step and click choose.
* Download the code.
* Open the ino file 'Arduino_Led_Blink' via the Arduino IDE.
* Verify and upload the code to the Arduino.
* Connect the Bolt to the Arduino as per the following diagram given in the documentation <a href="https://docs.boltiot.com/docs/arduino-library" target="_blank">here</a>.

To turn on or turn off on the LED follow these steps:
* Click <a href="https://docs.boltiot.com/docs/api-request-syntax" target="_blank">here</a> to learn the syntax for using the BoltIoT remote API
* Use the <a href="https://docs.boltiot.com/docs/send-serial-data-output" target="_blank">serial write</a> API call to send the command "TurnOn" or "TurnOff" to the Arduino.
* The command "TurnOn" will tell the Arduino to turn on the LED, where as the command "TurnOff" will tell the Arduino to turn off the LED.
* You can then use the <a href="https://docs.boltiot.com/docs/read-incoming-serial-data" target="_blank">serial read</a> API call to get a response from the Arduino.
