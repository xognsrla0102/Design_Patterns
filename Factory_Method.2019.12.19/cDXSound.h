#pragma once
#include "cSound.h"
class cDXSound : public cSound
{
private:
	static int cnt;
public:
	cDXSound() {
		printf("%d번째 다렉 사운드 생성\n", cnt + 1);
		cnt++;
	}
	virtual ~cDXSound() {
		printf("%d번째 다렉 사운드 소멸\n", cnt);
		cnt--;
	}

	virtual void Print() override {
		cout << "다렉 사운드 출력\n";
	}
};