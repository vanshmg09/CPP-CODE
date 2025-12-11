#include<iostream>
using namespace std;

int main() {
    int english, science, math;

    cout<<"Enter marks of english: ";
    cin>>english;

    cout<<"Enter marks of science: ";
    cin>>science;

    cout<<"Enter marks of math: ";
    cin>>math;

    int avg = (english + science + math) / 3;

    cout<<"Average is "<<avg;
}