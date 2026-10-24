//Minimum / Maximum Function.
#include<iostream>
using namespace std;
int minimum(int a , int b){
    if(a < b) return a;
    else return b;
}
int maximum(int a , int b){
    if(a > b) return a;
    else return b;
}
int main(){
    int a;
    cout << "Enter First Number : ";
    cin >> a;
    int b;
    cout << "Enter Second Number : ";
    cin >> b;
    // if(a < b) cout << "First Number is Minimum";
    // if(a > b) cout << "Second Number is Minimum";
    int min = minimum(a,b);
    cout << min << " is the Minimum of Two Numbers";
    int max = maximum(a,b);
    cout << endl;
    cout << max << " is the Maximum of Two Numbers";
}