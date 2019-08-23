#include "Engine.h"

int main() {
	
	// 1. 변수로 생성 - 용량문제
	//Engine engine;	
	//engine.Run();

	// 2. 포인터로 생성
	// 메모리에 새롭게 할당해서 포인터로 가리킴
	Engine* engine = new Engine();	
	engine->Run(); //(*engine1).Run();

	// 삭제
	delete engine;
	engine = nullptr;

	return 0;
}