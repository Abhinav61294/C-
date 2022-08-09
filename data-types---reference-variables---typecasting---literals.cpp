#include<iostream>
using namespace std;

int c = 45;

int main(){
    //                   BUILD IN DATA TYPES    
    int a,b,c;
    cout<<"a "<<endl; 
    cin>>a;           
    cout<<"b "<<endl; 
    cin>>b;
    c=a+b;
    cout<<"sum "<<c<<endl; // Priority is local.
    cout<<"sum glo "<<::c<<endl; // To specify global variable use scope resolution operator.
    
    /* Between float and double - double gets priority
     Use 34.4f to specify float - f=F-flexibility
     Use 34.4l for long double - l=L
    */
    
    //                    FLOAT DOUBLE LONG DOUBLE LITERALS
    //             LITERALS are const values assigned to const variables
    
    cout<<"Default is double "<<sizeof(34.4)<<endl;
    cout<<"float "<<sizeof(34.4f)<<endl;               // sizeof operator gives the size in bytes.
    cout<<"Float "<<sizeof(34.4F)<<endl;
    cout<<"long double "<<sizeof(34.4l)<<endl;
    cout<<"Long Double "<<sizeof(34.4L)<<endl;
    
    //                        REFERENCE VARIABLES 
    
    float x = 77.77;
    cout<<x<<endl;;         // Same thing different names
    float & y = x;
    cout<<y<<endl;
    
    //                       TYPECASTING - Conversion of one data-type to another
    
    int u = 77;
    float n = 11.45;
    cout<<"conversion "<<int(n)<<endl; // Both are 
    cout<<"Conversion "<<(int)n<<endl; // same
    int t = int(n);
    cout<<t<<endl;
    cout<<"Addition "<<u+int(n);
    return 0;
}