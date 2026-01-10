#include<iostream>
using namespace std;

void oddOrEven(int num){
    if((num & 1) == 0){
        cout<<"Even"<<endl;
    } else{
        cout<<"Odd"<<endl;
    }
}

int main(){
    oddOrEven(5);
    oddOrEven(6);
}