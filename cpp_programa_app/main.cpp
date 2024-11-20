#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter 1: ";
    cin >> a;
    cout << "Enter 2: ";
    cin >> b;

    if (a > b) {
        swap(a, b);
    }

    cout << "All number : " << endl;
    for (int i = a; i <= b; ++i) {
        cout << i << " ";
    }
    cout << endl;

    cout << "parni diapozou : " << endl;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "not parni diapazonu:" << endl;
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Number kranti 7:" << endl;
    for (int i = a; i <= b; ++i) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
