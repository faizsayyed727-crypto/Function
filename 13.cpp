// Duck Number --> Number which contains atleast One Zero in it.
#include<iostream>
using namespace std;
bool isDuck(int n) {
    while(n > 0){
        int digit = n % 10;
        if(digit == 0) return true;
        n /= 10;
    }
    return false;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isDuck(n)) cout << "It is a Duck Number";
    else cout << "It is Not a Duck Number";
    return 0;
}