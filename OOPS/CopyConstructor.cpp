#include<iostream>
using namespace std;

class Car{
    
public:
    string name;
    string color;


    Car(string name, string color){
        cout<<"Constructor with para"<<endl;
        (*this).name = name;
        (*this).color = color;
    }

    Car(Car &object){
        name = object.name;
        color = object.color;
    }
};

int main() {
    Car c1("maruti","black");
    Car c2(c1);
    cout<<c2.color<<endl;
    cout<<c2.name<<endl;

    

}