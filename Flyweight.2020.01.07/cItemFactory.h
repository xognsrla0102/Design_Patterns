#pragma once
#include "cSingleton.h"

class cItem;
class cItemFactory : public cSingleton<cItemFactory>
{
private:
	map<int, cItem*> itemLists;

public:
	~cItemFactory() {}

	template <typename T>
	cItem* getItem(int key) {
		if (itemLists.find(key) == itemLists.end())
			itemLists[key] = new T;

		return itemLists[key];
	}
};

