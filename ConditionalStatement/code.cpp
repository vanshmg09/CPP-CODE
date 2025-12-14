#include <iostream>
using namespace std;

int main() {
    int a,b ;
    char symbol;

     cout<< "Enter a: ";
     cin>> a;

     cout<< "Enter b: ";
     cin>> b;

     cout<< "Enter symbol: ";
     cin>> symbol;

     switch(symbol){
        case '+' : cout<< a+b <<endl;
                break;
        case '-' : cout<< a-b <<endl;
                break;
        case '*' : cout<< a*b <<endl;
                break;
        case '/' : cout<< a/b <<endl;
                break;
        
        default: cout<< "Invalid";
               
     }

    return 0 ;
}