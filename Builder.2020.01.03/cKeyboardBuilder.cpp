#include "pch.h"
#include "cKeyboard.h"
#include "cKeyboardBuilder.h"

cInputDevice* cKeyboardBuilder::getDevice()
{
	return m_keyboard;
}

void cKeyboardBuilder::makeDevice()
{
	m_keyboard = new cKeyboard;
}
