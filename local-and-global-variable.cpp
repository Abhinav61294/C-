#include<iostream>
using namespace std;

int glo = 7;
void sum(){
    int a;
    cout<<glo<<endl;
    }

int main(){               // program starts reading from main
    int glo=9;
    glo=17;
    int a=5,b=15;
    float pi=3.14;
    char c='d';
    sum();                // for sum() goes to line 5 then comes to line 17
    cout<<glo;
    
    return 0;
    
}