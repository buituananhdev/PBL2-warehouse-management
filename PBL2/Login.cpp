#include "Login.h"
#include "Manage.h"
#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PBL2::Login form;
    Application::Run(% form);
    return 0;
}