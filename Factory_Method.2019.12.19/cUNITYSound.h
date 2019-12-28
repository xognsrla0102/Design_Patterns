#pragma once
#include "cSound.h"
class cUNITYSound : public cSound
{
private:
	static int cnt;
public:
	cUNITYSound() {
		printf("%d번째 유니티 사운드 생성\n", cnt + 1);
		cnt++;
	}
	virtual ~cUNITYSound() {
		printf("%d번째 유니티 사운드 소멸\n", cnt);
		cnt--;
	}

	virtual void Print() override {
		cout << "유니티 사운드 출력\n";
	}
};