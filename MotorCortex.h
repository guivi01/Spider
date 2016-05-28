// MotorCortex.h

#ifndef _MOTORCORTEX_h
#define _MOTORCORTEX_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
	#include "leg.h" 
#else
	#include "WProgram.h"
#endif

class MotorCortexClass
{
 protected:
	 LegClass m_legs[6];

 public:
	void init();
	void Stand();
	void Crouch();
	void TipLeft();
	void TipRight();
	void Forward(void);
	void Backward(void);
};

//extern MotorCortexClass MotorCortex;

#endif

