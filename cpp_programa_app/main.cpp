#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 1000;

    for (int i = 1; i <= count; ++i) {
        sum += i;
    }

    double su = static_cast<double>(sum) / count;

    cout << "Chislo arefmetichne vid 1 do 1000: " << su << endl;

    return 0;
}

