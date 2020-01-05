#include "pch.h"
#include "cBuilder.h"
#include "cInputDevice.h"
#include "cInputDeviceManager.h"

cInputDevice* cInputDeviceManager::getDevice()
{
	m_builder->makeDevice();
	return m_builder->getDevice();
}
