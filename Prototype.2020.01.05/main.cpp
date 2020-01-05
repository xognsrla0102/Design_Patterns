#include "pch.h"
#include "cBullet.h"
#include "cBulletCircle.h"

//프로토타입 패턴:
//어떤 객체의 유사객체를 생성할 때
//기존의 것을 이용하여 편의를 돕는 것

//특히 어떤 객체의 유사객체를 생성할 때
//그 특정 객체에 접근이 불가능하고 부모객체에만 접근이
//가능할 때 도움이 많이 됨
//ex 유도탄을 만들고 싶은데 그냥 총알클래스로 접근이 가능할 때
//기존 유도탄 변수를 받아서 그 변수의 멤버함수로 유사객체 생성
int main() {
	cBullet* bulletCircle = new cBulletCircle;
	cBullet* bulletClone = bulletCircle->clone();

	delete bulletClone;
	delete bulletCircle;
}