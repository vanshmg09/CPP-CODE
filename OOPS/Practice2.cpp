#include<iostream>
using namespace std;

class Base{
public:
    virtual void print(){
        cout<<"Base";
    }
};

class Derive : public Base{
public:
    void print(){
        cout<<"Derive";
    }
};

int main(){
    Base *b = new Derive();
    b->print();
    delete b;

    return 0;
}