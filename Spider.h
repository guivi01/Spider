// Spider.h

#ifndef _SPIDER_h
#define _SPIDER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
	#include "MotorCortex.h"
#else
	#include "WProgram.h"
#endif

class SpiderClass
{
 protected:
	 MotorCortexClass m_motorCortex;

 public:
	void init();
};

//extern SpiderClass Spider;

#endif

