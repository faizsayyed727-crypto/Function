//sirf perfect cube root ke liye.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    for (int i = 1; i <= n; i++) {
        if (i * i * i == n) {
            cout << "Cube Root = " << i;
            break;
        }
    }
    // // while (i * i * i <= n) {
    //     if (i * i * i == n) {
    //         cout << "Cube Root = " << i;
    //         break;
    //     }
    //     i++;
    // }
}