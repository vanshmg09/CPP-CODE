#include<iostream>
using namespace std;

void func(){
    cout<<"Function called\n";
    func();
}

int main(){
    func();
}