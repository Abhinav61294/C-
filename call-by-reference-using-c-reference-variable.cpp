#include<iostream>
using namespace std;

// CALL by reference using C++ reference variables

void swapReferenceVar(int &a,int &b){    // int & swapReferenceVar()
    int nfs = a;
    a = b;
    b = nfs;                             // return a;
}

int main(){
    int x=4,y=7;
    cout<<"Value of x "<<x<<" Value of y "<<y<<endl;
    swapReferenceVar(x,y);     // Swaps values of a and b 
    
    // swapReferenceVar(x,y) = 766;
    // The value of x changes to 766
    
    cout<<"Value of x "<<x<<" Value of y "<<y<<endl;
    
    return 0;
}