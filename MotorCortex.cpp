// 
// 
// 

#include "MotorCortex.h"

void MotorCortexClass::init()
{
	m_legs[0].init(23, 22, 24, LegClass::RIGHT, LegClass::FRONT, 0, 5, -5);
	m_legs[1].init(26, 25, 27, LegClass::LEFT, LegClass::FRONT, -6, 0, 10);
	m_legs[2].init(29, 28, 30, LegClass::RIGHT, LegClass::MIDDLE,-5, 7, 0);
	m_legs[3].init(32, 31, 33, LegClass::LEFT, LegClass::MIDDLE, 0, 2, 0);
	m_legs[4].init(35, 34, 36, LegClass::RIGHT, LegClass::BACK, 5, 0, -10);
	m_legs[5].init(38, 37, 39, LegClass::LEFT, LegClass::BACK, 0, 0, 0);

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();
}

void MotorCortexClass::Stand()
{
	m_legs[0].Stand();
	m_legs[1].Stand();
	m_legs[2].Stand();
	m_legs[3].Stand();
	m_legs[4].Stand();
	m_legs[5].Stand();

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();
}

void MotorCortexClass::Crouch()
{
	m_legs[0].Crouch();
	m_legs[1].Crouch();
	m_legs[2].Crouch();
	m_legs[3].Crouch();
	m_legs[4].Crouch();
	m_legs[5].Crouch();

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();
}

void MotorCortexClass::TipLeft()
{
	m_legs[0].Stand();
	m_legs[1].Stand();
	m_legs[2].Stand();
	m_legs[3].Stand();
	m_legs[4].Stand();
	m_legs[5].Stand();

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();

	delay(1000);

	m_legs[0].Crouch();
	m_legs[3].Crouch();
	m_legs[4].Crouch();

	m_legs[0].Move();
	m_legs[3].Move();
	m_legs[4].Move();

}

void MotorCortexClass::TipRight()
{
	m_legs[0].Stand();
	m_legs[1].Stand();
	m_legs[2].Stand();
	m_legs[3].Stand();
	m_legs[4].Stand();
	m_legs[5].Stand();

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();

	delay(1000);

	m_legs[1].Crouch();
	m_legs[2].Crouch();
	m_legs[5].Crouch();

	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[5].Move();
}

void MotorCortexClass::Forward(void)
{
	TipRight();
	delay(500);
	m_legs[1].SetPel(10);
	m_legs[2].SetPel(10);
	m_legs[5].SetPel(10);

	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[5].Move();
	delay(500);
	TipLeft();
	delay(500);
	m_legs[1].SetPel(-10);
	m_legs[2].SetPel(-10);
	m_legs[5].SetPel(-10);
	m_legs[0].SetPel(10);
	m_legs[3].SetPel(10);
	m_legs[4].SetPel(10);

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();
	m_legs[0].SetPel(-10);
	m_legs[3].SetPel(-10);
	m_legs[4].SetPel(-10);
	delay(500);
	TipRight();
	delay(500);
	Stand();
}

void MotorCortexClass::Backward(void)
{
	TipRight();
	delay(500);
	m_legs[1].SetPel(-10);
	m_legs[2].SetPel(-10);
	m_legs[5].SetPel(-10);

	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[5].Move();
	delay(500);
	TipLeft();
	delay(500);
	m_legs[1].SetPel(10);
	m_legs[2].SetPel(10);
	m_legs[5].SetPel(10);
	m_legs[0].SetPel(-10);
	m_legs[3].SetPel(-10);
	m_legs[4].SetPel(-10);

	m_legs[0].Move();
	m_legs[1].Move();
	m_legs[2].Move();
	m_legs[3].Move();
	m_legs[4].Move();
	m_legs[5].Move();
	m_legs[0].SetPel(10);
	m_legs[3].SetPel(10);
	m_legs[4].SetPel(10);
	delay(500);
	TipRight();
	delay(500);
	Stand();
}


//MotorCortexClass MotorCortex;

