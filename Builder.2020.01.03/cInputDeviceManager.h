#pragma once

class cBuilder;
class cInputDevice;
class cInputDeviceManager
{
private:
	cBuilder* m_builder = nullptr;
public:
	cInputDeviceManager(cBuilder* builder) 
		: m_builder(builder) {}

	~cInputDeviceManager() {
		if (m_builder) {
			delete m_builder;
			m_builder = nullptr;
		}
	}

	cInputDevice* getDevice();
};

