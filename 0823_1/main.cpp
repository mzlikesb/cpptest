#include "Engine.h"

int main() {
	
	// 1. ������ ���� - �뷮����
	//Engine engine;	
	//engine.Run();

	// 2. �����ͷ� ����
	// �޸𸮿� ���Ӱ� �Ҵ��ؼ� �����ͷ� ����Ŵ
	Engine* engine = new Engine();	
	engine->Run(); //(*engine1).Run();

	// ����
	delete engine;
	engine = nullptr;

	return 0;
}