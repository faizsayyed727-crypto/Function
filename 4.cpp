//Function to return the Addition and Subtraction of Two Numbers
#include<iostream>
using namespace std;
int add(int a , int b){
    return a + b;
}
int sub(int a , int b){
    if(a > b) return a - b;
    else return b - a;
}
int main(){
    int a;
    cout << "Enter 1st Number : ";
    cin >> a;
    int b;
    cout << "Enter 2nd Number : ";
    cin >> b;
    int sum = add(a,b);
    int diff = sub(a,b);
    cout << "The Sum of Two Numbers is : " << sum;
    cout << endl;
    cout << "The Absolute Difference of Two Numbers is : " << diff;
}