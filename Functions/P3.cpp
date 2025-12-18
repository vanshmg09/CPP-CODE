#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    } else if(n<0){
        return -1;
    } else{
        int fact = 1;
        for(int i=1; i<=n; i++){
            fact *= i;
        }
        return fact;
    }
}

int main(){

    
    cout<< factorial(5);
    return 0;
}