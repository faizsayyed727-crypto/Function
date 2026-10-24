//#Disarium Number Kya Hota Hai Agar kisi number ke har digit ki uski position
//ki power se raise karke unka sum original number ke equal ho.
//89 --> 8¹ + 9² = 8 + 81 = 89 ,135 ,175.
#include<iostream>
#include<cmath>
using namespace std;
bool isDisarium(int n){     // 89
    int original = n;
    // Count digits
    int digits = 0;
    int temp = n;
    while(temp > 0) temp /= 10;
    //calculate the sum by  raising the power to respective places
    int sum = 0;
    temp = n;
    while(temp > 0){
        int digit = temp % 10; 
        sum += pow(digit, digits);  
        digits--;
        temp /= 10;
    }
    return sum == original;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isDisarium(n)) cout << "It is a Disarium Number";
    else cout << "It is Not a Disarium Number";
    return 0;
}