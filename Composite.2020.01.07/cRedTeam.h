#pragma once
#include "cCharacter.h"
class cRedTeam : public cCharacter
{
private:
	vector<cCharacter*> m_teams;
public:
	void add(cCharacter* obj);
	void remove(cCharacter* obj);

	virtual void atk() override;
	virtual void back() override;
	virtual void ultimate() override;
};

