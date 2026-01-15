#include<iostream>
using namespace std;

class A{
    string secrate = "secrate data";
    friend class B;
    friend void show(A &obj);
};

class B{
public: 
    void showSecrate(A &obj){
        cout<<obj.secrate<<endl;
    }
};

void show(A &obj){
     cout<<obj.secrate<<endl;
}

int main(){
    A a;
    B b;

    b.showSecrate(a);
    show(a);
}