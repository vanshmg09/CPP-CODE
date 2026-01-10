#include<iostream>
using namespace std;

void countSetBit(int num){
    int count = 0;

    while(num>0){
        int last = num & 1;
        count += last;
        num = num>>1;
    }

    cout<<count<<endl;
}

int main(){

    countSetBit(10);
    countSetBit(7);

}