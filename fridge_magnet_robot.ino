#include <IRremote.hpp>

//pin definitions
#define left 5
#define right 6

uint16_t command = 0;
uint16_t pcommand = 0;
unsigned long ptime = 0;

// function init
void moveLeftMotor();
void moveRightMotor();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  IrReceiver.begin(2, ENABLE_LED_FEEDBACK);
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (IrReceiver.decode()) {
    // IrReceiver.printIRResultMinimal(&Serial);
    // Serial.println();
    IrReceiver.resume();
    ptime = millis();
    command = IrReceiver.decodedIRData.command; //eight bits 
    if(command != 0x0){
      pcommand = command;
    }

  
    if(pcommand == 0x9){ //forward
      digitalWrite(left,1);
      digitalWrite(right,1);
    }else if(pcommand == 0x8){ // left
      digitalWrite(left,0);
      digitalWrite(right,1);
    }else if(pcommand == 0xA){ //right
      digitalWrite(left,1);
      digitalWrite(right,0);
    }else{
      digitalWrite(left,0);
      digitalWrite(right,0);
    }
  }
  else{
    if(millis() - ptime > 150){
      digitalWrite(left,0);
      digitalWrite(right,0);
    }
  } 
}

