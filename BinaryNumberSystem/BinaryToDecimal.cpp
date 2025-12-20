#include<iostream>
using namespace std;

void binaryToDecimal(int bnum){
    int dnum = 0;
    int pow = 1; //2^0 2^1 2^3...

    while(bnum>0){
        int dig = bnum % 10;
        bnum /= 10;
        dnum += dig * pow ;
        pow = pow * 2;
    }

    cout<<dnum<<endl;
}

void decimalToBinary(int dnum){
    int bnum = 0;
    int pow = 1; // 10^0 10^1 10^3...

    while(dnum>0){
        int rem = dnum % 2;
        bnum += rem * pow;
        pow *= 10;
        dnum /= 2;
    }

    cout<< bnum<<endl;
}

int main(){
    binaryToDecimal(1000);
    decimalToBinary(4);


    return 0;
}