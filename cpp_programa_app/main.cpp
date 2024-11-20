#include <iostream>
#include "conio.h"
#include "windows.h"
#include "Windows.h"

using namespace std;

int main() {
	int a, b = 20;
	cout << "Enter: ";
	cin >> a;

	if (a > b) {
		cout << "a > b" << endl;
	}
	else if (a < b) {
		cout << "a < b" << endl;
	}
	else {
		cout << "a = b" << endl;
	}



	return 0;
}