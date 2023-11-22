#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	SYSTEMTIME st,lc; //estructura 
	GetSystemTime(&st); //llamar a la funcion getsystemtime con el punteri a la estructura
	GetLocalTime(&lc);
	cout<<"El tiempo del sistema es: "<<st.wHour<<":"<<st.wMinute<<":"<<st.wSecond<<":"<<st.wMilliseconds<<endl;
	cout<<"El tiempo Local es: "<<lc.wHour<<":"<<lc.wMinute<<":"<<lc.wSecond<<":"<<lc.wMilliseconds<<endl;
	return 0;
}
