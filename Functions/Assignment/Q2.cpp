#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int sum = 0;

    while(num>0){
        int dig = num%10;
        num /= 10;
        sum += dig;
    }

    return sum;
}

int main(){
    cout<< sumOfDigit(22);

    return 0;
}