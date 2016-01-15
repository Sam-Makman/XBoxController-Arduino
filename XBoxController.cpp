#include "Arduino.h"
#include "XBoxController.h"

void XBoxController::init(void)
{
	Serial.begin(9600);
	buttonA = false;
	buttonB = false;
	buttonX = false;
	buttonY = false;
}

boolean XBoxController::A(void){
	return buttonA;
}

boolean XBoxController::B(void){
	return buttonB;
}

boolean XBoxController::X(void){
	return buttonX;
}

boolean XBoxController::Y(void){
	return buttonY;
}

short XBoxController::rightStickX(){
	return rightX;
}

short XBoxController::rightStickY(){
	return rightY;
}

short XBoxController::leftStickX(){
	return leftX;
}

short XBoxController::leftStickY(){
	return leftY;
}

byte XBoxController::rightTrigger(){
	return rTrigger;
}

byte XBoxController::leftTrigger(){
	return lTrigger;
}

void XBoxController::Read(void){
 	byte in = Serial.read();

 	//read in X button value
 	if(!(in - 8 < 0)){
 		buttonX = true;
 		in -= 8;
 	}else{
 		buttonX = false;
 	}

 	//read in Y button value 
 	if(!(in - 4 < 0)){
 		buttonY = true;
 		in -= 4;
 	}else{
 		buttonY=false;
 	}

 	//read in B button value
 	if(!(in - 2 < 0)){
 		buttonB = true;
 		in -= 2;
 	}else{
 		buttonB = false;
 	}

 	//read in A button value 
 	if(!(in - 1 < 0)){
 		buttonA = true;
 		in -= 1;
 	}else{
 		buttonA = false;
 	}

 	//read in right stick x value
 	short temp = Serial.read();
 	short t2 = Serial.read();
 	rightX = temp | (t2 << 8);
 	
 	//read in right stick y value
  	temp = Serial.read();
 	t2 = Serial.read();
 	rightY = temp | (t2 << 8);

 	//read in left stick x value
 	temp = Serial.read();
 	t2 = Serial.read();
 	leftX = temp | (t2 << 8);

 	//read in left stick y value
 	temp = Serial.read();
 	t2 = Serial.read();
 	leftY = temp | (t2 << 8);

 	//read in right trigger value 
 	rTrigger = Serial.read();

 	//read in left trigger value
 	lTrigger = Serial.read();
}