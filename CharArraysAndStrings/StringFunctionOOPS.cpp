#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello";
    string sentense = "I love c++ and c++";

    cout<<str.length()<<endl;

    cout<<str.at(4)<<endl;

    cout<<str.substr(2,3)<<endl;

    // cout<<str.length()<<endl;

    cout<<sentense.find("red")<<endl;

    int idx = sentense.find("red");

    cout<<idx;

}