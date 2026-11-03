
#include <iostream>
using namespace std;
int main() {
    int n,sum,i;
    cout<<"End : ";
    cin>>n;
    cout<<"Sum of numbers in range : "<<endl;
    sum=0;
        for(i=1;i<=n;i++)
            {
            sum=i+sum;
            }
            cout<<sum;
    
    
    return 0;
}
