#include "pch.h"

#include "cTodo.h"

#include "cTodo_M.h"
#include "cTodo_A.h"
#include "cTodo_E.h"

#include "cTime_M.h"
#include "cTime_A.h"
#include "cTime_E.h"

//브릿지 패턴:
//두 개의 인터페이스를 엮어서 하나의 작동을 하게 하는 것

int main() {
	vector<cTodo*> todayInsa;

	todayInsa.push_back(new cTodo_M(new cTime_M()));
	todayInsa.push_back(new cTodo_A(new cTime_A()));
	todayInsa.push_back(new cTodo_E(new cTime_E()));

	for (auto iter : todayInsa)
		iter->doAlarm();

	for (auto iter : todayInsa) {
		delete iter;
		iter = nullptr;
	}
}
