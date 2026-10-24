//Sunny Number --> number + 1 = Perfect Square(of some Other Number).
//eg:- 3,8,15,24,35
#include<iostream>
#include<cmath>
using namespace std;
bool isSunny(int n){ //3
    int num = n + 1; //4
    int root = sqrt(num); //2
    return root * root == num; //either return true or false
}
// bool isSunny(int n){     3
//     int num = n + 1;     4
//     for(int i = 1; i * i <= num; i++){ // i <= square root of number.
//         if(i * i == num) return true;        4
//     }
//     return false;
// }
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isSunny(n)) cout << "It is a Sunny Number";
    else cout << "It is Not a Sunny Number";
    return 0;
}