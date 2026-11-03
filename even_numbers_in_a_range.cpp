
#include <iostream>
using namespace std;
int main() {
    int n,i,s;
    cout<<"Start : ";
    cin>>s;
    cout<<"End : ";
    cin>>n;
    cout<<"Even numbers in range : "<<endl;
    for(i=s;i<=n;i++)
        if(i%2==0)
            cout<<i<<endl;
    
    return 0;
}
