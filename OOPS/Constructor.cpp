#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
public:
    Car(){
        cout<<"Constructor without para"<<endl;
    }

    Car(string name, string color){
        cout<<"Constructor with para"<<endl;
        (*this).name = name;
        (*this).color = color;
    }
};

int main() {
    Car c1;
    cout<<sizeof(c1)<<endl;
    Car c2("maruti", "black");
    cout<<sizeof(c1)<<endl;

}