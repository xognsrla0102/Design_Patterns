#include "pch.h"
#include "cSound.h"
#include "cDXSound.h"
#include "cUNITYSound.h"
#include "cSoundFactory.h"

cSound* cSoundFactory::CreateSound(string name)
{
	cSound* sound;
	if (strcmp(name.c_str(), "DirectX") == 0)
		sound = new cDXSound();
	else if (strcmp(name.c_str(), "UNITY") == 0)
		sound = new cUNITYSound();
	else return nullptr;

	return sound;
}
