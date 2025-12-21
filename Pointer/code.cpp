#include<iostream>
using  namespace std;

// void changeA(int a){
//     a = 20;
//     cout<< a<<endl;
// }

void changeA(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}

void changeA(int &b){
    b=50;
}

int main(){
    int a= 10;
    changeA(a);

    cout<< a;

}