#include "engine.h"


int main() {
	// 게임 만들기 by 절차적 프로그래밍	
	Initialize();
	while (bIsRunning) {
		Tick();
	}
	
	//Terminate();
	return 0;
}
