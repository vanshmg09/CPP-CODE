#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter n: ";
    cin>>n;

    int num = n;

    // int a = n/100;
    // int b = (n%100)/10;
    // int c = n%10;

    int unit = num%10;
    num/= 10;
    int tens = num%10;
    num/=10;
    int hundred = num;


    int arm = (unit*unit*unit)+(tens*tens*tens)+(hundred*hundred*hundred);

    if(n == arm){
        cout<< "Armstrong";
    } else{
        cout<< "Not";
    }
    

    return 0;
}