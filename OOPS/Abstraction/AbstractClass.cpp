#include<iostream>
using namespace std;

class Shape{
public:
    virtual void draw() = 0;
};

class Circle : public Shape{
public:
    void draw(){
        cout<<"draw Circle\n";
    }
};

class Square : public Shape{
public:
    void draw(){
        cout<<"draw Square\n";
    }
};

int main(){
    Circle c;
    c.draw();

    Square s;
    s.draw();

}