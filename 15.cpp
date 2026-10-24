//Automorphic Number --> Agar kisi number ke square ka last part 
//us number ke equal ho. eg:- 5 <--> 25.
#include <iostream>
using namespace std;
bool isAutomorphic(int n){  //5
    int square = n * n;     //25
    int temp = n;           //5
    int digits = 0;
    while(temp > 0){        //Counting the Number of Digits.
        digits++;
        temp /= 10;
    }
    int divisor = 1;
    for(int i = 1; i <= digits; i++){
        divisor *= 10;
    }
    return square % divisor == n; //last digits dega
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isAutomorphic(n)) cout << "It is an Automorphic Number";
    else cout << "It is Not an Automorphic Number";
    return 0;
}