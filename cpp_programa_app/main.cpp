#include <iostream>
#include "conio.h"
#include "windows.h"
#include "Windows.h"

using namespace std;

int main() {
	int begin = 1;
	int end = 10;
	int i = begin;

	do {
		cout << "i = " << i << endl;
		i++;
		Sleep(500);
	} while (i < end);

	return 0;
}