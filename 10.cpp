//Perfect Number --> Sum of All the Factors is Equal to the Number Itself.
// 6, 28, 496, and 8128 are examples of Perfect Number.
#include <iostream>
using namespace std;
bool isPerfect(int n){
    if (n <= 1) return false;
    int sum = 1;
    //factor cannot be more than half
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0) sum += i;
    }
    return sum == n;
}
// bool isPerfect(int n){
//     if (n <= 1) return false;
//     int sum = 1;
//     for (int i = 2; i * i <= n; i++){ // i <= under root of n
//         if (n % i == 0){         
//             sum += i;  
//             if (i != n / i) sum += n / i;   
//         }
//     }
//     return sum == n;
// }
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfect(n)) cout << "It is a Perfect Number";
    else cout << "It is Not a Perfect Number";
    return 0;
}