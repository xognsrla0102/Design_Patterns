#pragma once

class cBullet;
class cPrototypeFactory
{
private:
	vector<cBullet*> prototypeBullets;
public:
	cPrototypeFactory();

	cBullet* clone(int idx);
};

