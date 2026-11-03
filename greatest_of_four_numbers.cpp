
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    cout<<"Enter fourth number : ";
    cin>>d;
    if (a>b && a>c && a>d)
        cout<<"The greatest number is : "<<a;
    else if (b>a && b>c && b>d)
        cout<<"The greatest number is : "<<b;
    else if (c>a && c>b && c>d)
         cout<<"The greatest number is : "<<c;
    else
         cout<<"The greatest number is : "<<d;
    return 0;
}
