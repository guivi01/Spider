// leg.h

#ifndef _LEG_h
#define _LEG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
	#include <VarSpeedServo.h>
	//#include <Servo.h>
#else
	#include "WProgram.h"
#endif

class LegClass
{
  public:
	enum Side {
		RIGHT = -1,
		LEFT = 1
	};
	enum Location {
		BACK = 0,
		MIDDLE,
		FRONT
	};
 protected:
	 VarSpeedServo 	m_abductor;
	 VarSpeedServo 	m_pelvic;
	 VarSpeedServo 	m_knee;
	 Side	m_side;
	 Location m_location;
	 int	m_abdpos = 0, m_pelpos = 0, m_knepos = 0;
	 int	m_abdoff = 0, m_peloff = 0, m_kneoff = 0;
 public:
	void init(int abductor, int pelvic, int knee, Side side, Location location, int abdoff = 0, int peloff = 0, int kneoff = 0);
	void Stand();
	void Move();
	void Crouch();
};

#endif

