#include "pch.h"

//싱글톤 패턴:
//프로그램 전역에서 쓰일 수 있는
//하나의 인스턴스를 다루는 패턴
//ex : 게임 저장, 이미지 로딩

//여기에선 이미지와 사운드 출력도
//전역클래스로 만드는 것을 줄이기 위해서
//GAME 클래스를 통해 간접적으로 전역 호출한다

int main() {
	//IMAGE와 SOUND 매크로 함수를 실행하면서
	//내부적으로 GAME 객체를 생성함
	IMAGE.printImage();
	SOUND.playSound();
	//GAME 객체 소멸
}