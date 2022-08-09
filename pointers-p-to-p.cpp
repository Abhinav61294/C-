#include<iostream>
using namespace std;

int main(){
    
    // Pointers - Data Type which holds address of other data types.
    
    int a =7; 
    int*b =&a;
    
    // & - address of operator
    
    cout<<"Address "<<b<<endl;
    cout<<"Address "<<&a<<endl;
    
    // * - deference operator - value of 
    
    cout<<"Value "<<*b<<endl;
    
    // Pointer to pointer 
    
    int**c=&b;
    cout<<"Value "<<**c<<endl;
    cout<<"Address "<<&b<<endl;
    cout<<"Address "<<c<<endl;
    
    return 0;
}