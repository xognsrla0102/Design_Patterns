#include "pch.h"
#include "cInputDevice.h"
#include "cInputDeviceManager.h"
#include "cKeyboardBuilder.h"
#include "cMouseBuilder.h"

int main() {
	cInputDeviceManager* keyboardMgr = new cInputDeviceManager(new cKeyboardBuilder);
	cInputDevice* keyboard = keyboardMgr->getDevice();

	cInputDeviceManager* mouseMgr = new cInputDeviceManager(new cMouseBuilder);
	cInputDevice* mouse = mouseMgr->getDevice();

	keyboard->Active();
	mouse->Active();

	delete mouse;
	delete mouseMgr;

	delete keyboard;
	delete keyboardMgr;
}