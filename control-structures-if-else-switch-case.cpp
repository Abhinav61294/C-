#include<iostream>
using namespace std;

/*  Control Structures(basic)
   1- Sequence Structure - One by one action then exit
   2- Selection Structure - condition then exit
   3- Loop Structure - if true loop continues otherwise exit
*/
                  // Selection Structure
                  // if-else or if-else ladder
int main(){
    int age;
    cout<<"Age "<<endl;
    cin>>age;
    if((age<18)&&(age>0)){
        cout<<"No Party "<<endl;
    }
    else if(age<1){
        cout<<"Not Born "<<endl;
    }
    else if(age==18){
        cout<<"With Pass "<<endl;
    }
    else if((age>18)&&(age<100)){
        cout<<"Invited "<<endl;
    }
    else{
        cout<<"Too Old "<<endl;
    }
    
//            Switch case

   int j;
   cout<<"Enter the Number "<<endl;
   cin>>j;
   
    switch(j)
{
    case 7:
        cout<<"Ronaldo "<<endl;
        break;
    case 10:
        cout<<"Messi "<<endl;
        break;
    case 9:                              // if we don't use break then everything
        cout<<"Benzema "<<endl;          // after true condition will be executed 
        break;
    case 11:
        cout<<"Bale "<<endl;
        break;
    default:
        cout<<"No One "<<endl;
        break;
}
    return 0;
}