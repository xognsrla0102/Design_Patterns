#pragma once
#include "cBuilder.h"

class cInputDevice;
class cMouseBuilder : public cBuilder
{
private:
	cInputDevice* m_mouse;
public:
	virtual cInputDevice* getDevice() override;
	virtual void makeDevice() override;
};

