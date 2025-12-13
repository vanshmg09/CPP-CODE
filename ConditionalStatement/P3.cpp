#include <iostream>
using namespace std;

int main() {
    int income;

    cout<< "Enter income: ";
    cin>> income;

    if(income< 500000){
        cout<<"Tax will be 0 Rs";
    } else if(income>= 500000 && income<= 1000000){
        cout<< "Tax will be "<< (income * 0.2)<<"Rs";
    } else if(income > 1000000){
        cout<< "Tax will be "<< (income * 0.3)<<"Rs";
    }

    return 0;
}