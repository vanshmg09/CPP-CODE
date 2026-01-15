#include<iostream>
using namespace std;

class Animal{
public: 
    string color;

    void eat(){
        cout<<"eat\n";
    }

    void breath(){
        cout<<"breath\n";
    }
};

class Mamula : public Animal{
public:

    string bloodType;
    Mamula(){
        bloodType = "warm";
    }
};

class Dog : public Mamula{
public:
    void tailWag(){
        cout<<"dog wag his tail\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breath();
    d1.tailWag();
}