#include "pch.h"
#include "cProject.h"

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