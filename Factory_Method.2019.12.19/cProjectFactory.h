#pragma once
#include "cProject.h"

class cProject;
class cProjectFactory
{
private:
	cProject* proj = nullptr;
public:
	cProject* CreateProject(string lang);
};

