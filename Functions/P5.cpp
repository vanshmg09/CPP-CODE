#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
     
    if(n==0){
        return 1;
    }

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}

int binomialCoeff(int n, int r){
    int bc = factorial(n) /( factorial(r) * factorial(n-r));
    return bc;
}

int main(){
    cout<< binomialCoeff(4,2);
}