#include "pch.h"
#include "cMouse.h"
#include "cMouseBuilder.h"

cInputDevice* cMouseBuilder::getDevice()
{
	return m_mouse;
}

void cMouseBuilder::makeDevice()
{
	m_mouse = new cMouse;
}
