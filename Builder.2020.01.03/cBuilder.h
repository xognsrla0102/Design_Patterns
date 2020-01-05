#pragma once

class cInputDevice;
class cBuilder abstract
{
public:
	virtual cInputDevice* getDevice() = 0;
	virtual void makeDevice() = 0;
};

