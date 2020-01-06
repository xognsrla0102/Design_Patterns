#include "pch.h"
#include "cBulletCircle.h"
#include "cBulletFollow.h"
#include "cPrototypeFactory.h"

cPrototypeFactory::cPrototypeFactory()
{
	prototypeBullets.push_back(new cBulletCircle);
	prototypeBullets.push_back(new cBulletFollow);
}

cBullet* cPrototypeFactory::clone(int idx)
{
	return prototypeBullets[idx]->clone();
}
