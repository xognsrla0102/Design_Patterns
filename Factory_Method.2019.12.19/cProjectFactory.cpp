#include "pch.h"
#include "cProject.h"
#include "cCProject.h"
#include "cCPlusProject.h"
#include "cProjectFactory.h"

cProject* cProjectFactory::CreateProject(string lang)
{
	if (strcmp(lang.c_str(), "C") == 0)
		proj = new cCProject;
	else if (strcmp(lang.c_str(), "C++") == 0)
		proj = new cCPlusProject;
	else {
		cout << "그런 언어로 만들 수 없습니다.\n";
		return nullptr;
	}
	return proj;
}
