#include "precomp.h"
#include "App.h"

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
	int RetVal = 0;

	App *app = new App();
	RetVal = app->Run();
	delete app;

	return RetVal;
}
