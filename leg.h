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
		BACK = -40,
		MIDDLE = 0,
		FRONT = 40
	};
 protected:
	 VarSpeedServo 	m_abductor;
	 VarSpeedServo 	m_pelvic;
	 VarSpeedServo 	m_knee;
	 Side	m_side;
	 Location m_location;
	 int	m_abdpos = 0, m_pelpos = 0, m_knepos = 0;
	 int	m_abdoff = 0, m_peloff = 0, m_kneoff = 0;
	 int	m_velocity = 127;
 public:
	void init(int abductor, int pelvic, int knee, Side side, Location location, int abdoff = 0, int peloff = 0, int kneoff = 0);
	void Stand();
	void Move();
	void Crouch();
	void SetPel(int pelpos) { m_pelpos = pelpos; };
	void SetAbd(int abdpos) { m_abdpos = abdpos; };
	void SetKne(int knepos) { m_knepos = knepos; };
};

#endif

