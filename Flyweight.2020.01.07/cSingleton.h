#pragma once

template <typename T>
class cSingleton
{
private:
	cSingleton() {}
	static T* p;
private:
	static void destroy() {
		delete p;
		p = nullptr;
	}
public:
	virtual ~cSingleton() {}

	static T* getInst() {
		if (!p) {
			p = new T();
			atexit(destroy);
		}
		return p;
	}
};

template <typename T>
T* cSingleton<T>::p = nullptr;