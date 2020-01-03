#include "pch.h"
#include "cProject.h"

//팩토리 메소드 패턴:
//추상화된 클래스는 어떤 객체를 만들지 정보만 받고
//정보에 따라서 하위 클래스에게 생성을 맡김

int main() {
	string name[3] = { "NULL", "DirectX", "UNITY" };
	cProject proj;
	int idx;

	cout << "만들 언어를 정하시오\n";
	cout << "1. 다이렉트X, 2. 유니티\n";
	cout << "입력 : "; cin >> idx;

	if (idx > 2 || idx < 0) idx = 0;

	proj.CreateProject(name[idx]);
	proj.Print();
}