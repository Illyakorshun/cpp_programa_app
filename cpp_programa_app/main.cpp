#include <iostream>

using namespace std;

int main() {
    int a, b, tmp;
    cout << "Enter 1: ";
    cin >> a;
    cout << "Enter 2: ";
    cin >> b;

	if (a > b) {
        tmp = a;
		a = b;
		b = tmp;
    }

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }

    cout << "all suma: " << sum << endl;

    return 0;
}
