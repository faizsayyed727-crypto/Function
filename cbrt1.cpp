//Decimal Answers ke liye bhi true.
#include <iostream>
using namespace std;
int main() {
    double n;
    cin >> n;
    cout << "Enter a number: ";
    double i = 0;
    while (i * i * i <= n) {
        i += 0.01;
    }
    cout << "Cube Root = " << i - 0.01;
    return 0;
}