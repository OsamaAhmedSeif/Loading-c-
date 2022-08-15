#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{	
	for (size_t i = 1; i <= 100;)
	{
		cout << "Downloading test program" << endl;
		cout << "Test %" << i;

		Sleep(0100);
		system("cls");

		i++;
	}
	cout << "Test program has been installed" << endl;
}