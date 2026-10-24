//Harshad/Niven Number --> number % sum of all digits == 0.
// 1, 2, 3, ... , 10 , 12, 18 , 21 , 24.
#include <iostream>
using namespace std;
bool isHarshad(int n){  //18
    int original = n;       //18
    int sum = 0;        
    while (n > 0){
        int digit = n % 10;   //8,1
        sum += digit;         // 8 + 1 == 9
        n /= 10;              //1,0
    }
    return original % sum == 0;     // 18 % 9 == 0
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isHarshad(n)) cout << "It is a Harshad Number";
    else cout << "It is Not a Harshad Number";
    return 0;
}
