#include "pch.h"
#include "cMccree.h"
#include "cMercy.h"
#include "cAna.h"
#include "cRedTeam.h"

//컴포지트 패턴:
//한 인터페이스에서 어떤 객체만 다루는 것이 아닌
//그 객체의 그룹도 함께 관리할 수 있게 해주는 패턴

int main() {
	cRedTeam redTeam;

	cMccree mc;
	cMercy mcy;
	cAna ana;

	redTeam.add(&mc);
	redTeam.add(&mcy);
	redTeam.add(&ana);

	redTeam.atk();
	cout << endl;
	redTeam.back();
	cout << endl;
	redTeam.ultimate();
}