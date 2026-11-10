//Ciel --> Round Ups the Value
//Floor --> Rounds Down the Value
//Round --> Round figure
//Truncate(trunc) --> Decimal part remove karta hai.
#include <iostream>
using namespace std;
int main() {
    double x;
    cout << "Enter a Number : ";
    cin >> x;
    int ans_1 = (int)x;
    if (x > 0 && x != ans_1) ans_1++;
    cout << ans_1;
    cout << endl;
    int ans_2 = (int)x;
    if (x < 0 && x != ans_2) ans_2--;
    cout << ans_2;
    cout << endl;
    // Round off
    int ans_3 = (int)x;
    if (x >= 0) ans_3 = (int)(x + 0.5);
    else ans_3 = (int)(x - 0.5);
    cout << ans_3;
    cout << endl;
    //Trunc
    int ans_4 = (int)x;
    cout << ans_4;
    return 0;
}