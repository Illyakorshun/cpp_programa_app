#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a : ";
    cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    cout << "Sum cil  " << a << "to 500: " << sum << endl;

    return 0;
}
