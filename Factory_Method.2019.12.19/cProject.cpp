#include "pch.h"
#include "cCProject.h"
#include "cCPlusProject.h"
#include "cProject.h"

void cProject::CreateProject(string lang)
{
	const char* tmp = lang.c_str();

	if (strcmp(tmp, "C")) {

		cout << "C로 만듭니다.\n";
	}
	else if (strcmp(tmp, "C++")) {
		cout << "C++로 만듭니다.\n";
	}
	else {
		cout << "그런 언어로 만들 수 없습니다.\n";
	}
}
