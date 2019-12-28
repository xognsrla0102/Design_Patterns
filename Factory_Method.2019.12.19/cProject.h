#pragma once

class cSound;
class cImage;
class cSoundFactory;
class cImageFactory;

class cProject
{
private:
	vector<cSound*> m_sounds;
	vector<cImage*> m_imgs;

	cSoundFactory* m_sound;
	cImageFactory* m_img;
public:
	~cProject();

	void CreateProject(string name);
	void Print();
};

