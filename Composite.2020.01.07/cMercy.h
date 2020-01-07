#pragma once
#include "cCharacter.h"
class cMercy : public cCharacter
{
public:
	virtual void atk() override;
	virtual void back() override;
	virtual void ultimate() override;
};

