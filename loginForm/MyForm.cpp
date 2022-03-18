#include "MyForm.h"
#include "LoginForm.h"
#include"HomeForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	loginForm::MyForm form;
	Application::Run(% form);
	
}
