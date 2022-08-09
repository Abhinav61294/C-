#include<iostream>
using namespace std;

     // Function - Once made can be called multiple times
     // Function Prototype - Function can be declared anywhere

void g(void);          // void g(); works too
int sum(int a,int b);  // Function Prototype declared
// int sum(int a,b);   Not Accepted
// int sum(int,int);   Accepted

int main(){
    int num1,num2;
    cout<<"1 "<<endl;
    cin>>num1;
    cout<<"2 "<<endl;
    cin>>num2;
    
    // num1 and num2 are actual parameters
    
    cout<<"Sum "<<sum(num1,num2);
    g();
    return 0;
}

int sum(int a,int b){
    
    // a and b are formal parameters, will be taking values from actual
    // formal and actual can be same
    
    int c = a+b;
    return c;
}

void g(){                    // vpid does not return anything
    cout<<"\nHow u doin ";
}