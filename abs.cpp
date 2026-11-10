//Absolute Value ke liye answers.
#include <iostream>
using namespace std;
int main() {
    double n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Absolute value is : ";
    if(n >= 0) cout << n;
    else cout << (-1 * n);
    return 0;
}