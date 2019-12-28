#include "pch.h"
#include "cSound.h"
#include "cImage.h"
#include "cSoundFactory.h"
#include "cImageFactory.h"
#include "cProject.h"

cProject::~cProject()
{
	for (auto iter : m_sounds) {
		if (iter) delete iter;
		iter = nullptr;
	}
	for (auto iter : m_imgs) {
		if (iter) delete iter;
		iter = nullptr;
	}
	m_sounds.clear();
	m_imgs.clear();

	delete m_sound;
	m_sound = nullptr;

	delete m_img;
	m_img = nullptr;
}

void cProject::CreateProject(string name)
{
	if (strcmp(name.c_str(), "NULL") == 0) return;

	m_sound = new cSoundFactory;
	m_img = new cImageFactory;

	m_sounds.push_back(m_sound->CreateSound(name));

	m_sounds.push_back(m_sound->CreateSound(name));
	m_sounds.push_back(m_sound->CreateSound(name));

	m_imgs.push_back(m_img->CreateImage(name));
	cout << "프로젝트 세팅 완료\n";
}

void cProject::Print()
{
	size_t soundCnt = m_sounds.size();
	size_t imageCnt = m_imgs.size();

	for (int i = 0; i < soundCnt; i++) {
		printf("%d번째 ", i + 1);
		m_sounds[i]->Print();
	}
	for (int i = 0; i < imageCnt; i++) {
		printf("%d번째 ", i + 1);
		m_imgs[i]->Print();
	}
}
