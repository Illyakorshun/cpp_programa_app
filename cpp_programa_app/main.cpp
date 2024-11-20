#include <iostream>
#include "conio.h"
#include "windows.h"
#include "Windows.h"

using namespace std;

int main() {
	cout << "Enter zero";
	int number;
	int sum = 0;
	do {
		cin >> number;
		sum += number;
	} while (number != 0);
	cout << "Sum is " << sum << endl;
	

	return 0;
}