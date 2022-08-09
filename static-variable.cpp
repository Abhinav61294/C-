#include<iostream>
using namespace std;

int product(int a,int b){
    static int c =0;        // Value is allocated
    c = c+2;                // Value will be increased when called again
    return a*b+c;
}

int main(){
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    cout<<"Product will be "<<product(a,b)<<endl;
    cout<<"Product will be "<<product(a,b)<<endl;
    cout<<"Product will be "<<product(a,b)<<endl;
    cout<<"Product will be "<<product(a,b)<<endl;
    cout<<"Product will be "<<product(a,b)<<endl;
    return 0;
}