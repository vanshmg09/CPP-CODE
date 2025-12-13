#include <iostream>
using namespace std;

int main() {
    int a, b, c;
     cout<< "Enter a :";
     cin>> a;

     cout<< "Enter b :";
     cin>> b;

     cout<< "Enter c :";
     cin>> c;

     if(a>=b && a>=c){
        cout<<a;
     } else if(c>=b && c>=c){
        cout<<c;
     } else if(b>=a && b>=c){
        cout<<a;
     }
    return 0;
}