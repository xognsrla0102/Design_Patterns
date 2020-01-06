#pragma once
#include "cBullet.h"
class cBulletFollow : public cBullet
{
public:
	virtual cBullet* clone() override;
};

