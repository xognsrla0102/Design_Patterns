#include "pch.h"
#include "cImageFactory.h"
#include "cSoundFactory.h"
#include "cFactory.h"

//추상화 팩토리:
//팩토리 메소드의 확장
//(공장도 추상화시킴, 기존에는 정해진 공장에 여러개에 제품이 있을 경우라서 확장이 조금 불편했음)
//주어진 정보에 따라 제품을 만드는 공장이 여러개 있을 경우
//그 공장에 맞는 제품이 생산됨

int main() {
	cFactory* F;
	F = new cImageFactory;
	F->makeProduct();

	delete F;

	F = new cSoundFactory;
	F->makeProduct();

	delete F;
}