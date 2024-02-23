#include "MyForm.h"
#include "Game2048.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Game2048App::MyForm form;
	Application::Run(% form);

}