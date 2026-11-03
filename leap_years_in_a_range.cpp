#include <iostream>
using namespace std;
int main() {
    int start,end,i;
    cout<<"Start : ";
    cin>>start;
    cout<<"End : ";
    cin>>end;
    for (i=start;i<=end;i++)
        if(i%400==0||(i%100!=0 && i%4==0))
            cout<<i<<" "<<"Leap year"<<endl;
        else
            cout<<i<<" "<<"Not a leap year"<<endl;
    
    return 0;
}
