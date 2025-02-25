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

//?? 702: Xây d?ng ?ng d?ng ??t món ?n và thanh toán ??n hàng.

//M?c tiêu :

//-S? d?ng các m?ng song song ?? l?u d? li?u quan h?.

//- S? d?ng các m?ng m?t chi?u ?? l?u các món ?n : tên món, ??n giá.

//- S? d?ng các thu?t toán thao tác v?i m?ng.

//- Xu?t ra file.

//- Vi?t các hàm ?? xây d?ng các ch?c n?ng.