#pragma once
#include "cBullet.h"

class cBulletCircle : public cBullet
{
private:
	cBulletCircle* m_bullet = nullptr;
	float m_pos;
	float m_speed;
public:
	cBulletCircle(float pos, float speed)
		: m_pos(pos), m_speed(speed) {}

	virtual cBullet* clone() override;
};

