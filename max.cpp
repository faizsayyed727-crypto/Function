#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;
    int num;
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }
    cout << "Maximum number = " << maxNum;
    cout << endl;
    cout << "Minimum number = " << minNum;
    return 0;
}