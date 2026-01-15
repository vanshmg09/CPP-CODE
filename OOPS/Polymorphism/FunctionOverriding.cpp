#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"parent class show";
    }
};

class Child : public Parent{
public:
    void show(){
        cout<<"child class show";
    }
};

int main(){
    Child c;
    c.show();

}