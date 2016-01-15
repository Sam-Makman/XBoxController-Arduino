#ifndef XBoxController_h
#define XBoxController_h

#include "Arduino.h"

class XBoxController
{
public:
	void init();
	boolean A();
	boolean B();
	boolean X();
	boolean Y();
	void Read();
	short rightStickX();
	short rightStickY();
	short leftStickX();
	short leftStickY();
	byte rightTrigger();
	byte leftTrigger();
private:
	boolean buttonA;
	boolean buttonB;
	boolean buttonX;
	boolean buttonY;
	short rightX;
	short rightY;
	short leftX;
	short leftY;
	byte rTrigger;
	byte lTrigger;
};

#endif