#pragma once

class cTime;
class cTodo abstract
{
protected:
	cTodo(cTime* nowTime) : m_nowTime(nowTime) {}
private:
	cTime* m_nowTime;
public:
	void doAlarm();
};

