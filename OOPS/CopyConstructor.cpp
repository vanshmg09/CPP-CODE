#include<iostream>
using namespace std;

class Car{
    
public:
    string name;
    string color;
    int *milage;


    Car(string name, string color){
        cout<<"Constructor with para"<<endl;
        (*this).name = name;
        (*this).color = color;
        milage = new int;
        *milage = 12;
    }

    Car(Car &object){
        name = object.name;
        color = object.color;
        milage = new int;
        *milage = *object.milage;
    }

    ~Car(){
        cout<<"destroying object"<<endl;
        if(milage != NULL){
            delete milage;
            milage = NULL;
        }
    }
};

int main() {
    Car c1("maruti","black");
    Car c2(c1);
    cout<<c2.color<<endl;
    cout<<c2.name<<endl;
    cout<<*c2.milage<<endl;
    *c2.milage = 10;
    cout<<*c1.milage<<endl;
  

}