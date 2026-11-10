#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;
    int num, maxNum , minNum;
    cout << "Enter number 1: ";
    cin >> maxNum;   //Pehle number ko hi maximum maan liya
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > maxNum) maxNum = num;
        if(num < minNum) minNum = num;
    }
    cout << "Maximum number = " << maxNum;
    cout << endl;
    cout << "Minimum number = " << minNum;
    return 0;
}