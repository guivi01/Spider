#include <VarSpeedServo.h>
#include "MotorCortex.h"

MotorCortexClass m_motorCortex;

void setup()
{
	m_motorCortex.init();
	Serial.begin(9600);
	Serial.println("Hello Computer");
}

void loop()
{
	if (Serial.available() > 0) {
		char c = Serial.read();
		Serial.println( c);
		switch (c) {
		case 'a':
			m_motorCortex.Stand();
			break;
		case 'b':
			m_motorCortex.Crouch();
			break;
		case 'c':
			m_motorCortex.TipLeft();
			break;
		case 'd':
			m_motorCortex.TipRight();
			break;
		case 'e':
			m_motorCortex.Forward();
			break;
		case 'f':
			m_motorCortex.Backward();
			break;
		}
		
	}
}
