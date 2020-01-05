#include "pch.h"
#include "cProject.h"
#include "cProjectFactory.h"

//팩토리 메소드 패턴:
//추상화 클래스가 정보를 받고
//하위 클래스에게 정보에 따른 제품의 생산을 맡기는 것

int main() {
	cProjectFactory F;

	cProject* proj = F.CreateProject("C");
	proj->Init();

	delete proj;

	proj = F.CreateProject("C++");
	proj->Init();

	delete proj;
}