#include "stdafx.h"
#include "Car.h"

unsigned int CCar::GetSpeed()
{
	return m_speed;
}

CCar::Gears CCar::GetGear()
{
	return Gears::Neutral;
}

bool CCar::IsEngineOn()
{
	return m_isEngineOn;
}

bool CCar::StartEngine()
{
	m_isEngineOn = true;
	return true;
}

bool CCar::SetSpeed(unsigned int speed)
{
	m_speed = speed;
	return true;
}