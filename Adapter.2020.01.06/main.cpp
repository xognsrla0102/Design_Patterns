#include "pch.h"
#include "cShape.h"
#include "cText.h"

//어댑터 패턴 : 호환성이 없는 인터페이스 때문에
//같이 동작할 수 없는 클래스들을
//동작할 수 있게 해주는 것

//2가지 방법이 있다

//1. 클래스 어댑터 : 클래스 인터페이스를 변경
//2. 객체 어댑터 : 객체 인터페이스를 변경

//ex : 도형 클래스에 글자를 출력하고 싶을 경우

//cShape* nemo = cText("I'm string");
//이렇게 클래스가 서로 다른 경우

int main() {
	cShape* shape = new cText("ArmStrong!");
	//cText클래스는 cShape와 cTextView 클래스를
	//다중 상속 받으므로 부모 클래스인 cShape의 객체로
	//받을 수 있다.

	shape->draw();
	//원래 shape는 도형을 출력하는 draw함수가 있었지만
	//글자를 받는 cText클래스를 받음으로써 인터페이스가 바뀌었다.

	delete shape;
}