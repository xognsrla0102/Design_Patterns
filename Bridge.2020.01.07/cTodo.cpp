#include "pch.h"
#include "cTime.h"
#include "cTodo.h"

void cTodo::doAlarm()
{
	m_nowTime->alarm();
}
