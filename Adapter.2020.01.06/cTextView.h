#pragma once
class cTextView
{
private:
	string data;
public:
	cTextView(string s) : data(s) {}

	virtual void show();
};

