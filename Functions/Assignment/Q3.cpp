#include<iostream>
using namespace std;

int fun(int a, int b){
    int result = a*a + b*b + 2*a*b;
    return result;
}

int main() {
    cout<< fun(2,3);

    return 0;
}