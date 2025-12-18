#include<iostream>
using namespace std;


void isEven(int a){
    a%2 == 0 ? cout<<"Even" : cout<< "Odd";
}

int main(){

    isEven(6);
    return 0;
}