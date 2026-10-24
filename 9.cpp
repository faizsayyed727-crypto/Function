//Function to Check whether a Given Function is Palindrome or Not.
#include <iostream>
using namespace std;
bool isPalindrome(int n){
    int original = n;
    int reverse = 0;
    while (n > 0){      //324,32,3
        int digit = n % 10;     // 4,2,3
        reverse = reverse * 10 + digit; // 4,42,423
        n = n / 10;    //32,3,0
    }
    return original == reverse;         // original == 423
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n)) cout << "It is a Palindrome Number";
    else cout << "It is Not a Palindrome Number";
    return 0;
}