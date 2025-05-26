// #include "PinDefinitionsAndMore.h"
#include <IRremote.hpp>

#define IR_RECEIVE_PIN 2 

const int led1 = 3;

const int led2 = 4;

const int led3 = 5;

void setup(){
    Serial.begin(9600);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);

    Serial.println(F("Ready to Receive IR signals..."));
  }

void loop(){
  Serial.println(IrReceiver.decode());
    if(IrReceiver.decode()){
        IrReceiver.printIRResultShort(&Serial);

        uint8_t command = IrReceiver.decodedIRData.command;

        if (command == 0xC) {        // Example: Button '1'
            digitalWrite(led1, !digitalRead(led1));  // Toggle LED1
          } else if (command == 0x18) { // Example: Button '2'
            digitalWrite(led2, !digitalRead(led2));  // Toggle LED2
          } else if (command == 0x5E) { // Example: Button '3'
            digitalWrite(led3, !digitalRead(led3));  // Toggle LED3
          }
  
      IrReceiver.resume();  
      }

      delay(1000);
    }
