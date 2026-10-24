//Spy Number --> (Sum = Product) of the Digits, eg :- 123 , 1412.
// 1 x 2 x 3 == 1 + 2 + 3
#include<iostream>
using namespace std;
bool isSpy(int n){              //123
    int original = n , sum = 0 , product = 1;
    while(n > 0){
        int digit = n % 10;     //3,2,1
        sum += digit;           //3 + 2 + 1
        product *= digit;       //3 x 2 x 1
        n /= 10;                //12,1,0
    }
    return sum == product;      //either return true or false
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isSpy(n)) cout << "It is a Spy Number";
    else cout << "It is Not a Spy Number";
    return 0;
}