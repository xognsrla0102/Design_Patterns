#pragma once
#include "cImage.h"
class cUNITYImage : public cImage
{
private:
	static int cnt;
public:
	cUNITYImage() {
		printf("%d번째 유니티 이미지 생성\n", cnt + 1);
		cnt++;
	}
	virtual ~cUNITYImage() {
		printf("%d번째 유니티 이미지 소멸\n", cnt);
		cnt--;
	}

	virtual void Print() override {
		cout << "유니티 이미지 출력\n";
	}
};