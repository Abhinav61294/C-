#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the no."<<endl;
    int x,a=1;cin>>x;
    cout<<"Enter the power"<<endl;
    int p;cin>>p;
    for(int i=1;i<=p;i++)
    {
        a=x*a;
    }
    cout<<"Answer is : "<<a<<endl;
    return 0;
}
