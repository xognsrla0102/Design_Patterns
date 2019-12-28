#pragma once
#include "cImage.h"
class cDXImage : public cImage
{
private:
	static int cnt;
public:
	cDXImage() {
		printf("%d번째 다렉 이미지 생성\n", cnt + 1);
		cnt++;
	}
	virtual ~cDXImage() {
		printf("%d번째 다렉 이미지 소멸\n", cnt);
		cnt--;
	}

	virtual void Print() override {
		cout << "다렉 이미지 출력\n";
	}
};