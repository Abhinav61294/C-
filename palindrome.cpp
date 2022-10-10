#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size(),count=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[s.size()-1-i])
        {
        cout<<"NO"<<endl;
        break;
        }
        else
        count++;
    }
    if(count==n/2)
    cout<<"YES"<<endl;
    return 0;
}