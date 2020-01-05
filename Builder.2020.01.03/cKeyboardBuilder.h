#pragma once
#include "cBuilder.h"

class cInputDevice;
class cKeyboardBuilder : public cBuilder
{
private:
	cInputDevice* m_keyboard;
public:
	virtual cInputDevice* getDevice() override;
	virtual void makeDevice() override;
};

