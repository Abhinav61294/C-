#include<iostream> // System defined

/* Types of header files:
 1. System header files: It comes with compiler.
 2. User defined header files: It is written by the programmer.
 
#include"this.h" - Gives error of this file is not present in the directory as it is user defined.
*/
using namespace std;
int main(){
 int a =5,b=7;
 
 // Arithematic Operators - Sum/Subtract/Multiply
 
 cout<<"Modulo Operator gives the remainder "<<a%b<<endl;
 cout<<"Post increment "<<a++<<endl;
 cout<<"Post decrement"<<a--<<endl;
 cout<<"Pre increment "<<++a<<endl;
 cout<<"Pre decrement "<<--a<<endl;
 cout<<"Divide integer is output "<<a/b<<endl;
 
 // Assignment Operators - used to assign values to variables.
 
 // int a =3,b=9
 // char d='d'
 
 // Comparison Operators
 
 cout<<"Equal "<<(a==b)<<endl; // in parentheses 
 cout<<"Not equal "<<(a!=b)<<endl;
 cout<<"Greater than equal "<<(a>=b)<<endl;
 cout<<"Less than equal "<<(a<=b)<<endl;
 cout<<"Greater than "<<(a>b)<<endl;
 cout<<"Less than "<<(a<b)<<endl;
 
 // Logical Operators
 
 cout<<" AND operator both are included "<<((a<b)&&(a==b))<<endl;
 cout<<" OR operator one is considered "<<((a<b)||(a==b))<<endl;
 cout<<" NOT operator reverses "<<(!(a==b))<<endl;
 
 // Bitwise Operators
 
 return 0;
}