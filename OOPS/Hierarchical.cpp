#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eat\n";
    }

    void breath(){
        cout<<"breath\n";
    }
};

class Bird : public Animal{
public:
    void fly(){
        cout<<"fly\n";
    }
};

class Fish : public Animal{
public:
    void swim(){
        cout<<"swim\n";
    }
};

class Mamual : public Animal{
public:
    void walk(){
        cout<<"walk\n";
    }
};

int main(){
    Animal a;
    Fish f;
    Bird b;
    Mamual m;

    a.eat();
    a.breath();

    f.swim();
    f.eat();
    f.breath();

    b.fly();
    b.eat();
    b.breath();

    m.walk();
    m.eat();
    m.breath();

}