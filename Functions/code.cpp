#include<iostream>
using namespace std;

int sum(int a, int b){
    int p =  a+b;
    cout<<p<<endl;
    return p;
}

double sum(int a, int b){
    int p =  a+b;
    cout<<p<<endl;
    return p;
}

double sum( double a, double b){
    cout<<a+b<<endl;
    return a+b;
}



int main(){

    sum(2,5);
    sum(5.5,6.8);

    return 0;
}