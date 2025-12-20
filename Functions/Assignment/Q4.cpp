#include<iostream>
using namespace std;

int largestNum(int a, int b,int c){
    if(a>=b && a>=c){
        return a;
    } else if(b>=a && b>=c){
        return b;
    }
    return c;
}

int main(){
    cout<< largestNum(5,6,8);

    return 0;
}