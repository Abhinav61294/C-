#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter no. of elements"<<endl;
    int n,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<endl;
        cin>>a[i];
        if(m<a[i])
            m=a[i];
    }
    cout<<"Largest no. is "<<m<<endl;
    int k=m;
    for(int i=0;i<n;i++)
    {
        if(k>a[i])
            k=a[i];
    }
    cout<<"Smallest no. is "<<k<<endl;
    int f1=0,f2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
            f1++;
        else if(a[i]==k)
            f2++;
    }
    cout<<"Frequency of largest no. is "<<f1<<endl;
    cout<<"Frequency of smallest no. is "<<f2<<endl;
    return 0;
}
