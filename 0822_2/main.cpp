#include "engine.h"


int main() {
	// ���� ����� by ������ ���α׷���	
	Initialize();
	while (bIsRunning) {
		Tick();
	}
	
	//Terminate();
	return 0;
}
