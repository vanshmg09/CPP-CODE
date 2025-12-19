#include<iostream>
#include<cmath>
using namespace std;

bool  isPrime(int num){
    if(num==1){
        return false;
    }

    for(int i=2; i<=num-1; i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}

void PrimeRange(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}

int main(){
    PrimeRange(50);

    return 0;
}