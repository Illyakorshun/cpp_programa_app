#include <iostream>
#include "conio.h"
#include "windows.h"
#include "Windows.h"

using namespace std;

int main() {
		for (size_t i = 0, j = 0; i < 10 && j % 2 == 0; i++, j+=2) 
		{
			cout << i << "x" << j << "=" << i * j << endl;
		}

	return 0;
}