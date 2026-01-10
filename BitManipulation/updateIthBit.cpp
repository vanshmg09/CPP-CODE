#include<iostream>
using namespace std;

int updateIthBit(int num, int i, int val){
    num = num & ~(1<<i); // clear

    num = num | (val<<i); //update

    return num;
}

int main(){
    cout<<updateIthBit(7,3,1)<<endl;
    cout<<updateIthBit(7,2,0)<<endl;

}