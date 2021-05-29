#include <iostream>
#include <Windows.h>

bool aState{ false };

void menu(bool aState)
{
	system("cls");
	std::cout << "Auto Сlicer v 1.0\n";


	std::cout << "Turn on Z\n";
	std::cout << "Off on Z\n";


	if (aState)
	{
		std::cout << "Status ON\n";
	}

	else


	{
		std::cout << "Status OFF\n";
	}
}

int main()
{
	menu(aState);
	while (true)
	{
		if (GetAsyncKeyState(0x5A) & 1)
		{
			aState = !aState;
			menu(aState);
		}

		if (aState)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		}

		Sleep(100); // Задержка кликов
	}


	return 0;
}