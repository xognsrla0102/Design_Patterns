#pragma once

class cBuilder;
class cInputDevice;
class cInputDeviceManager
{
private:
	cBuilder* m_build;
public:
	cInputDevice* getDevice();
};

