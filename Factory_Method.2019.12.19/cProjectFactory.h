#pragma once
#include "cProject.h"

class cProject;
class cProjectFactory
{
private:
	cProject* proj = nullptr;
public:
	void CreateProject(string lang);
};

