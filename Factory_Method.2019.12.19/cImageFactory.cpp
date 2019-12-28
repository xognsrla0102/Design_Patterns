#include "pch.h"
#include "cImage.h"
#include "cDXImage.h"
#include "cUNITYImage.h"
#include "cImageFactory.h"

cImage* cImageFactory::CreateImage(string name)
{
	cImage* image;
	if (strcmp(name.c_str(), "DirectX") == 0)
		image = new cDXImage();
	else if (strcmp(name.c_str(), "UNITY") == 0)
		image = new cUNITYImage();
	else return nullptr;
	return image;
}