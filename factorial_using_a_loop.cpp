#include <iostream>
using namespace std;
int main() {
    int n,F,i;
    cout<<"End : ";
    cin>>n;
    cout<<"Factorial"<<" "<<n<<" "<<":"<<endl;
    F=1;
        for(i=1;i<=n;i++)
            {
            F=F*i;
            }
            cout<<F;
    
    
    return 0;
}
