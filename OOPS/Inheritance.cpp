#include<iostream>
using namespace std;

class Animal{
public:
    string color;

    void eat(){
        cout<<"eat"<<endl;
    }

    void breath(){
        cout<<"breath"<<endl;
    }
};

class Fish : public Animal{
public:
    int fins;

    void swim(){
        // eat();
        cout<<"swim"<<endl;
    }

};

int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.eat();
    f1.breath();
    f1.swim();
}