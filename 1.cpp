//Calling a Function 'n' times.
#include<iostream>
using namespace std;
void greet(){
    cout << "Hello World ! ";
    cout << endl;
}
int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        greet();
    }
}