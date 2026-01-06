#include<iostream>
using namespace std;

int* func(){
    int *ptr = new int;

    *ptr = 100;
    cout<<"ptr point to "<<*ptr<<" "<<ptr<<endl;
 
    return ptr;
}

int main(){
    int *x = func();
    cout<<*x<<" "<<x;

}