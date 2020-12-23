#include "MyForm.h"

#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
 [STAThread]
 int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Calculator::MyForm form;
    Application::Run(% form);
    return 0;
}

/*#include "MyForm.h"
#include <Windows.h>
using namespace Calculator; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}*/

/*#include "MyForm.h"

#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace Calculator; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Calculator::MyForm form;
    Application::Run(% form);
    return 0;
}*/