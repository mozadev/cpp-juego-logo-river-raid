// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>
using namespace System;
using namespace std;

void CambiarColor(int color)
{
	switch (color)
	{
	case 1:
		Console::ForegroundColor = ConsoleColor::Green;
		break;
	case 2:
		Console::ForegroundColor = ConsoleColor::Red;
		break;
	case 3:
		Console::ForegroundColor = ConsoleColor::Cyan;
		break;
	}
}
void Logo()
{
	int x, y, color;
	Random r;
	x = 20;
	y = 7;
	while (kbhit() == false)
	{
		color = r.Next(1, 4);
		CambiarColor(color);

		Console::SetCursorPosition(x, y);
		cout << "   |  __ \|_   _\ \    / /  ____|  __ \  |  __ \     /\   |_   _|  __ \ ";
		Console::SetCursorPosition(x, y + 1);
		cout << " | |__) | | |  \ \  / /| |__  | |  | | | |__) |   /  \    | | | |  | | ";
		Console::SetCursorPosition(x, y + 2);
		cout << "  |  _  /  | |   \ \/ / |  __| | |  | | |  _  /   / /\ \   | | | |  | | ";
		Console::SetCursorPosition(x, y + 3);
		cout << "  | | \ \ _| |_   \  /  | |____| |__| | | | \ \  / ____ \ _| |_| |__| |";
		Console::SetCursorPosition(x, y + 4);
		cout << " |_|  \_\_____|   \/   |______|_____/  |_|  \_\/_/    \_\_____|_____/ ";

		Sleep(100);
	}
}
int main()
{
	Logo();
	getch();
	return 0;
}
