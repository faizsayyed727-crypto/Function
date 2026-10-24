//Strong / Peterson Number --> Number whose Sum of all Factorial 
// is Equal to the Original Number. eg :- 145 --> 1! + 4! + 5! = 1 + 24 + 120
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
bool isStrong(int n){   //145
    int original = n;   //145
    int sum = 0;
    while(n > 0){
        int digit = n % 10;          //5,4,1
        sum += factorial(digit);     //120 + 24 + 1 == 145
        n /= 10;                     //14,1,0
    }
    return sum == original;     //1,0 --> either true or false
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isStrong(n)) cout << "It is a Strong Number";
    else cout << "It is Not a Strong Number";
    return 0;
}