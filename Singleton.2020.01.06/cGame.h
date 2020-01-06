#pragma once

class cSound;
class cImage;
class cGame
{
private:
	cSound* m_sound = nullptr;
	cImage* m_image = nullptr;
public:
	cGame() { cout << "게임 실행\n"; }
	~cGame() { cout << "게임 종료\n"; }

	static cGame& getInst() {
		//이렇게 안쪽에서 변수를 정적으로 선언해주면
		//멀티 쓰레딩 환경에서 초기화를 한 번만 실행해준다.
		static cGame m_game;
		return m_game;
	}
	cSound& getSound() { return *m_sound; }
	cImage& getImage() { return *m_image; }
};

#define GAME cGame::getInst()
#define SOUND cGame::getInst().getSound()
#define IMAGE cGame::getInst().getImage()