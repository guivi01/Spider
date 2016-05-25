// 
// 
// 

#include "leg.h"

void LegClass::init(int abductor, int pelvic, int knee, Side side, Location location, int abdoff, int peloff, int kneoff)
{
	m_abductor.attach(abductor);
	m_pelvic.attach(pelvic);
	m_knee.attach(knee);
	m_side = side;
	m_location = location;
	m_abdoff = abdoff;
	m_peloff = peloff;
	m_kneoff = kneoff;

	switch (m_location) {
	case BACK:
		m_abdpos = -20;
		break;
	case MIDDLE:
		m_abdpos = 0;
		break;
	case FRONT:
		m_abdpos = 20;
		break;
	}
}

void LegClass::Move()
{
	m_abductor.write(90 + (m_abdpos*m_side) + m_abdoff);
	m_pelvic.write(90 + (m_pelpos*m_side) + m_peloff);
	m_knee.write(90 + (m_knepos*m_side) + m_kneoff);
}


LegClass Leg;

