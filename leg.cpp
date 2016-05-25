// 
// 
// 

#include "leg.h"

void LegClass::init(int abductor, int pelvic, int knee, Side side, Location location, int abdoff, int peloff, int kneoff)
{
	m_abductor.attach(abductor);
	delay(15);
	m_pelvic.attach(pelvic);
	delay(15);
	m_knee.attach(knee);
	delay(15);
	m_side = side;
	m_location = location;
	m_abdoff = abdoff;
	m_peloff = peloff;
	m_kneoff = kneoff;

	
	m_abdpos = 60;
	m_knepos = 60;
	switch (m_location) {
	case BACK:
		m_pelpos = -20;
		break;
	case MIDDLE:
		m_pelpos = 0;
		break;
	case FRONT:
		m_pelpos = 20;
		break;
	}
}

void LegClass::Move()
{
	m_abductor.slowmove(90 + (m_abdpos*m_side) + (m_abdoff*m_side), 30);
	delay(15);
	m_pelvic.slowmove(90 + (m_pelpos*m_side) + (m_peloff*m_side), 30);
	delay(15);
	m_knee.slowmove(90 + (m_knepos*m_side) + (m_kneoff*m_side), 30);
	delay(15);
	//m_abductor.write(90 + (m_abdpos*m_side) + (m_abdoff*m_side));
	//m_pelvic.write(90 + (m_pelpos*m_side) + (m_peloff*m_side));
	//m_knee.write(90 + (m_knepos*m_side) + (m_kneoff*m_side));
}

void LegClass::Stand()
{
	m_abdpos = 10;
	m_knepos = 60;
	switch (m_location) {
	case BACK:
		m_pelpos = -20;
		break;
	case MIDDLE:
		m_pelpos = 0;
		break;
	case FRONT:
		m_pelpos = 20;
		break;
	}
}

void LegClass::Crouch()
{
	m_abdpos = 60;
	m_knepos = 60;
	switch (m_location) {
	case BACK:
		m_pelpos = -20;
		break;
	case MIDDLE:
		m_pelpos = 0;
		break;
	case FRONT:
		m_pelpos = 20;
		break;
	}
}


//LegClass Leg;

