#include <iostream>
#include <Windows.h>
using namespace std;
void menu()
{char bruh;
	cout << "Press 'X' to enable and 'Z' to disable autoclicker\n";
	cout << "SLEEP(speed)\n";}
void clicker()
{bool click = false; 
	int sleep;
	int cps;
	cin >> cps;
	while (true)
	{if (GetAsyncKeyState('X')) 
	{click = true;}
	else if (GetAsyncKeyState('Z')) 
	{click = false;}
	if (click == true) 
	{mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
	Sleep(cps);}}}
int main()
{menu();
clicker();
return 0;}