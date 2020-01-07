#include "pch.h"
#include "cRedTeam.h"

void cRedTeam::add(cCharacter* obj)
{
	m_teams.push_back(obj);
}

void cRedTeam::remove(cCharacter* obj)
{
	for (auto iter = m_teams.begin(); iter != m_teams.end(); iter++)
		if ((*iter) == obj) {
			m_teams.erase(iter);
			obj = nullptr;
			break;
		}
}

void cRedTeam::atk()
{
	for (auto iter : m_teams)
		iter->atk();
}

void cRedTeam::back()
{
	for (auto iter : m_teams)
		iter->back();
}

void cRedTeam::ultimate()
{
	for (auto iter : m_teams)
		iter->ultimate();
}
