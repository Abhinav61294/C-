#include<iostream>
using namespace std;

float moneyRec(int money , float inc = 1.04){    // Here float inc is default argument
    return money*inc;                            // First write compulsory argument then default(RightMost)
}

int main(){
    int salary = 70000;
    cout<<"Salary is "<<moneyRec(salary)<<endl;   // Default 
    cout<<"Salary for VIPs "<<moneyRec(salary,2); // No Default
    return 0;
}

// int strlen(const char*p);
// Constant Argument does not allow to change variable or any modification in function