#include "pch.h"
#include "cInputDevice.h"
#include "cInputDeviceManager.h"
#include "cKeyboardBuilder.h"
#include "cMouseBuilder.h"

//빌더 패턴 :
//공장과 유사
//인풋 디바이스 매니저에서 특정 디바이스 공장을 생성하고
//그 공장의 디바이스를 얻어옴

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