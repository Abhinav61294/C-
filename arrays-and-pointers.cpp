
/*                  ARRAYS
 Collection of items of similar type stored in contiguous memory location */

#include<iostream>
using namespace std;

int main(){
    int marks[999999] = {7,9,10,11};  // Value in square braces is optional
    cout<<marks[1000]<<endl;          // Indexing
    
    int no[2] = {7,10};
    cout<<no[1]<<endl;
    cout<<no[0]<<endl;
    
    // Element in an array can be edited
    
    no[1] = 77;
    cout<<no[1]<<endl;
    
    // Looping an array
    
    for(int i = 1;i<4;i++)
    {
        cout<<"Marks at "<<i<<" is "<<marks[i]<<endl;
    }
    
    /*         Pointer Arithematic
         
         address(new) = address(current) + i*sizeof(data type)
           (p+i)            (p)     
    */
    
    int*j = marks;
    cout<<"Value at [0] "<<*j<<endl;
    cout<<"Value at [1] "<<*(j+1)<<endl;
    cout<<"Value at [2] "<<*(j+2)<<endl;
    cout<<"Value at [3] "<<*(j+3)<<endl;
    
    cout<<*(j++)<<endl;
    cout<<*(++j)<<endl;
    
    return 0;
}