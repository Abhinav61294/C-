#include<iostream>
using namespace std;

// CALL by reference using pointers

void swapPointer(int*a,int*b){
    int nfs = *a;
    *a = *b;
    *b = nfs;
}

int main(){
    int x=4,y=7;
    cout<<"Value of x "<<x<<" Value of y "<<y<<endl;
    swapPointer(&x,&y);     // Swaps values of a and b 
    cout<<"Value of x "<<x<<" Value of y "<<y<<endl;
    
    return 0;
}