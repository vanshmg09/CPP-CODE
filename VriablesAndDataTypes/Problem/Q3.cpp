#include<iostream>
using namespace std;

int main() {
    float P, R, T;

    cout<<"Enter value of P: ";
    cin>>P;

    cout<<"Enter value of R: ";
    cin>>R;

    cout<<"Enter value of T: ";
    cin>>T;

    float intrest = (P * R * T) / 100;

    cout<<"Intrest is "<<intrest;

    return 0;
}