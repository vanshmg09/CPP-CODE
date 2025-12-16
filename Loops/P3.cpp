#include<iostream>
using namespace std;

int main() {
    int n= 10829;//init
    int sum = 0;
    int digit = 0;

    while(n!= 0){//cond
        
        digit = n%10;
        if(digit%2 != 0){
            sum += digit;
        }
        
        n/=10;//update
    }

    cout<<sum<<endl;
    cout<<digit;

    return 0;
    
}