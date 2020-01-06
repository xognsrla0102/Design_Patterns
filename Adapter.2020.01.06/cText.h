#pragma once
#include "cShape.h"
#include "cTextView.h"

class cText : public cShape, public cTextView
{
public:
	cText(string s) : cTextView(s) {}

	virtual void draw() { cTextView::show(); }
	//인터페이스 변경
};

