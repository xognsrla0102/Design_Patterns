#include "pch.h"
#include "cPrototypeFactory.h"

enum { CIRCLE, FOLLOW };

//프로토타입 패턴:
//어떤 객체의 유사객체를 생성할 때
//기존의 것을 이용하여 편의를 돕는 것

//팩토리 메소드 패턴과 반대로
//객체의 생성을 상위 클래스에게 처리함

int main() {
	cPrototypeFactory F;

	F.clone(FOLLOW);
	F.clone(CIRCLE);
}