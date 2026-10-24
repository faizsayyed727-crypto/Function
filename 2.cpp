//Calling a Function (Method);
//Function hamesha call ke upar hona chahiye.
#include<iostream>
using namespace std;
void england(){
    cout << "You are in England" << " ";
    return;
}
void rome(){
    cout << "You are in Rome" << " ";
    england();
    return;
}
void europe(){
    cout << "You are in Europe" << " ";
    rome();
    return;
}
void india(){
    cout << "You are in India" << " ";
    europe();
    return;
}
int main(){
    india();
}