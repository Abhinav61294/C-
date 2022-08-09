#include <iostream>
using namespace std;

// Structure - User-defined data-type

struct player{                // typedef struct player
    int number;
    char club;                // Shortcut is typedef
    float salary;
};                            // } pl;

// Union - User-defined data-type
// Uses 1 data-type at a time

   union animal
   {
       int legs;
       char name;
       float days;
   };
   
   
int main()
{
    // Enum - User-defined data-type
    // Used for indexing
    
    enum meal{breakfast,lunch,dinner};
    meal m1 = lunch;
    cout<<m1<<endl;
    cout<<(m1==0)<<endl;   // m1 is not equal to 0 it is equal to 1 so output will be 0(false)
    cout<<breakfast<<endl;
    cout<<dinner<<endl;
    
    struct player ronaldo;  // Use pl instead of struct player
    
    union animal sloth;
    sloth.legs = 4;
    sloth.name = 's';
    sloth.days  = 365.5;    // Last one will be valid 
    
    cout<<sloth.days<<endl;
    cout<<sloth.legs<<endl; // Invalid number
    
    ronaldo.number = 7;
    ronaldo.club ='R';
    ronaldo.salary = 23587789.464;
    
    cout<<"Jersey Number "<<ronaldo.number<<endl;
    cout<<"Club "<<ronaldo.club<<endl;
    cout<<"Salary in euros "<<ronaldo.salary<<endl;


    return 0;
}