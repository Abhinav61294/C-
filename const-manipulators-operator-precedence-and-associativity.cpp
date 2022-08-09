#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 77;
    cout<<"a was "<<a<<endl;
    a=777;
    cout<<"a is "<<a<<endl;
    
    // To make constant value - fixed value
    
    const int b = 3;
    cout<<"b was "<<b<<endl;
    
   // b = 7;                   gives error
   // cout<<"b is "<<b<<endl;
   
   int u =7,i=77,t=777;
   cout<<"u is "<<u<<endl;
   cout<<"i is "<<i<<endl;
   cout<<"t is "<<t<<endl;
   
   cout<<"u is "<<setw(4)<<u<<endl;          // setw()- set width - comes from iomanip header file
   cout<<"i is "<<setw(4)<<i<<endl;          // 4 bits space to right
   cout<<"t is "<<setw(4)<<t<<endl;
   
   /*    Manipulators
       1- endl
       2- setw
       
       
         Operator Precedence and (if same precedence)associativity
         multiply-divide-remainder above + and - 
         if same for both left to right associativity
         
    */
    
    int m = 6,n=4;
    int o = ((m*2)+7)-n;
    cout<<o;
    
    return 0;
}