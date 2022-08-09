#include<iostream>
using namespace std;

// Recursion - Function calls itself till the condition is satisfied
// Iteration is sometimes better 

//    Function Overloading - Same thing used for multiple purpose
//    Polymorphism  - Same thing different looks 

/*int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int a;
    cout<<" Enter the number "<<endl;
    cin>>a;
    cout<<" Fibonacci Series for "<<a<<" is "<<fib(a)<<endl;
    return 0;
    
}*/

              // Function Overloading

int sum(int a,int b){
    cout<<"For 2 arguments "<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"For 3 arguments "<<endl;
    return a+b+c;
}

int main(){
    int x,y,z;
    cout<<"Sum is "<<sum(100,7,8)<<endl;
    cout<<"Sum is "<<sum(9,8)<<endl;
    return 0;
}
   
   
