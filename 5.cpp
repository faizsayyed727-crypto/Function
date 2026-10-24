#include <iostream>
using namespace std;
int add(int, int);           // Function Prototype

int main() {                 // --> Parameters are Optional.
    cout << add(10, 20);
    return 0;
}

int add(int a, int b)         // Function Definition
{
    return a + b;
}
//Function Prototype   	 |  //Function Definition
// Sirf declaration hoti hai.|	Actual implementation hoti hai.
// Body nahi hoti.           |	Body {} hoti hai.
// Semicolon (;) lagta hai.  |	Semicolon nahi lagta.
// Compiler ko function ke baare me batata hai. | Function ka kaam define karta h