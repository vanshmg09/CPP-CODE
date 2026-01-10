#include<iostream>
using namespace std;

void clearLastIthBit(int num, int i){
    int bitMask = (~0) << i;

    num = num & bitMask;

    cout<<num<<endl;
}

int main(){
    clearLastIthBit(15,2);
}