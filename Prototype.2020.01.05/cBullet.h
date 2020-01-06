#pragma once
class cBullet abstract
{
protected:
	cBullet* m_bullet;
public:
	virtual cBullet* clone() = 0;
};

