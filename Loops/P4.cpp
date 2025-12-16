#include<iostream>
using namespace std;

int main() {
    int n= 10829;//init
    int rev=0;

    while(n>0){
        int dig = 0;
        dig = n%10;
        n/=10;
        rev = rev * 10 + dig;
    }

    cout<< rev;
    return 0;
    
}