#include "formLogin.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::formLogin form;
	Application::Run(% form);
}

//?? 702: X�y d?ng ?ng d?ng ??t m�n ?n v� thanh to�n ??n h�ng.

//M?c ti�u :

//-S? d?ng c�c m?ng song song ?? l?u d? li?u quan h?.

//- S? d?ng c�c m?ng m?t chi?u ?? l?u c�c m�n ?n : t�n m�n, ??n gi�.

//- S? d?ng c�c thu?t to�n thao t�c v?i m?ng.

//- Xu?t ra file.

//- Vi?t c�c h�m ?? x�y d?ng c�c ch?c n?ng.