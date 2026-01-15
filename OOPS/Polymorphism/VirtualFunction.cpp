#include<iostream>
using namespace std;

class Parent{
public:
    virtual void hello(){
        cout<<"parent class hello\n";
    }
};

class Child : public Parent{
public:
    virtual void hello(){
        cout<<"child class hello\n";
    }
};

int main(){
    Child c;
    
    Parent *ptr;
    ptr = &c; // runtime binding 

    ptr->hello();
}