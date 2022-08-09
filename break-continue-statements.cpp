#include<iostream>
using namespace std;

/*                  Statements
        1- Break - after condition breaks
        2- Continue - except condition prints everything
*/

int main(){
    for(int i =1;i<=7;i++)
    {
        // cout<<i<<endl; - 4 is included
        if(i==4)
        {
            break;
        }
        cout<<i<<endl; // 4 is excluded
    }
    
    for(int j =20;j<=30;j++)
    {
        //cout<<j<<endl; - 25 will be printed- don't use here
        if(j==25)
        {
            continue;
        }
        cout<<j<<endl;
    }
    
    return 0;
}