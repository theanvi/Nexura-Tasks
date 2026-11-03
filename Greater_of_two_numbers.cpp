#include <iostream>
using namespace std;
int main() {
    float a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    if (a>b)
       cout<<"a is greater";
    else if (a==b)
       cout<<"Both numbers are equal";
    else
       cout<<"b is greater";
    return 0;
}
