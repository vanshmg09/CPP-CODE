#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    
    
    cout<<"Enter n: ";
    cin>>n;

    int fib1 = 0;
    int fib2 = 1;

    cout<<fib1<<" "<<fib2<<" ";
    int i=3;
    while(i<=n){

        int fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        cout<<fib<<" ";
        i++;
    }
     
    return 0;
    }