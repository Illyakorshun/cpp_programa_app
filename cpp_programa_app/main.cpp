#include <iostream>
#include "conio.h"
#include "windows.h"
#include "Windows.h"

using namespace std;

int main() {
	int number = 0;

	do {
		system("cls");
		cout << "Enter a number: ";
		cin >> number;
		if (number < 0 || number > 10 ) {
			cout << "The number must be between 0 and 10" << endl;
			getch();
		}
		else {
			break;
		}
	} while (true);

	return 0;
}