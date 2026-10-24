//Permutation and Combination using Functions
#include<iostream>
using namespace std;
int factorial(int a){
    int fact = 1;
    for(int i = 2 ; i <= a ; i++){
        fact = fact * i;
    }
    return fact;
}
int permutation(int n , int r){
    int npr = factorial(n) / factorial(r);
    return npr;
}
int combination(int n , int r){
    int ncr = factorial(n) / ( factorial(r) * factorial(n - r) );
    return ncr;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int r;
    cout << "Enter r : ";
    cin >> r;
    cout << "N P R is : " << permutation(n , r);
    cout << endl;
    cout << "N C R is : " << combination(n , r);
}