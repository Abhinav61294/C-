#include<iostream>
using namespace std;

int main(){
    
    /*    Loops in C++ - Used for repetitive condition
    
         1- For Loop
         2- While Loop
         3- Do-While Loop
    */
    
    for(int  i =0;i<4;i++)   // for(initialization;condition;updation)
    {                        // infinite for loop condition - eg(34<=40)
        cout<<i<<endl;       // loop body(C++ code)
    }
    
    int j=1;                 // initialization
    while(j<=4)              // condition
    {                        // infinite while loop condition(true)
       cout<<j<<endl;        // loop body(C++ code)
       j++;                  // updation
    }
    
    int u=1;                 // initialization
    do{                      
        cout<<u<<endl;       // loop body(C++ code)
        u++;                 // updation
    }while(u<=4);            // condition
    
    // if condition(false) still do-while loop executes atleast once
    // first execution then condition
    
    return 0;
}