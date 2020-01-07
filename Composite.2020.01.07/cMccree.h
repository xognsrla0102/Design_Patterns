#pragma once
#include "cCharacter.h"
class cMccree : public cCharacter
{
public:
	virtual void atk() override;
	virtual void back() override;
	virtual void ultimate() override;
};

