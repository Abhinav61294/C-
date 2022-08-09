#include<iostream>
using namespace std;

// Inline function - In less time multiple calling of same function can be done
// Used for small functions not for bigger / don't use loops / not for static variables
// Depends on the compiler whether to run or not

inline int product(int a, int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    
    return 0;
}
