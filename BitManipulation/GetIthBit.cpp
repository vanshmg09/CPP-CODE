#include<iostream>
using namespace std;

int getIthBit(int num, int i){
    int bitmask = 1 << i;

    if((num & bitmask) == 0){
        return 0;
    } else{
        return 1;
    }
}

int main(){
    cout<<getIthBit(7,2)<<endl;
    cout<<getIthBit(4,1)<<endl;

}