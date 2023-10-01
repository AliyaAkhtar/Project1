#include "MainForm.h"
//#include <iostream>
//#include <fstream>

using namespace System;
using namespace System::Windows::Forms;
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MainForm form;
	Application::Run(%form);

	return 0;
}