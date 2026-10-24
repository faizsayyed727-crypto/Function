//Pascals Triangle.
#include<iostream>
using namespace std;
int factorial(int a){
    int fact = 1;
    for(int i = 2 ; i <= a ; i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n , int r){
    int ncr = factorial(n) / ( factorial(r) * factorial(n - r) );
    return ncr;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i = 0; i <= n ; i++){
        for(int j = 0 ; j <= i ; j++){
            int icj = combination(i,j);
            cout << icj << " ";
        }
        cout << endl;
    }
}