//Neon Number --> Square of Number ke Digits ka Sum = Original Number.
// eg :- 1,9,10,etc.
// 9 square = 81 --> 8 + 1 = 9.
#include<iostream>
using namespace std;
bool isNeon(int n){ //9
    int square = n * n , sum = 0;   // 81
    while (square > 0){
        int digit = square % 10;        //1,8
        sum += digit;       // 1 + 8 = 9
        square /= 10;       // 8,0
    }
    return sum == n;       //1,0 --> either true or false
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isNeon(n)) cout << "It is a Neon Number";
    else cout << "It is Not a Neon Number";
    return 0;
}