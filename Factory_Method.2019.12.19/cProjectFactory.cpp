#include "pch.h"
#include "cProject.h"
#include "cCProject.h"
#include "cCPlusProject.h"
#include "cProjectFactory.h"

void cProjectFactory::CreateProject(string lang)
{
	if (strcmp(lang.c_str(), "C") == 0) {
		proj = new cCProject;
		cout << "C언어로 만듭니다.\n";
	}
	else if (strcmp(lang.c_str(), "C++") == 0) {
		cout << "C++로 만듭니다.\n";
		
	}
	else cout << "그런 언어로 만들 수 없습니다.\n";
}
