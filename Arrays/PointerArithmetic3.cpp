#include<iostream>
using namespace std;

int main(){
    int a =5;
    int *ptr = &a;

    int *ptr2 = ptr + 3;

    cout<<ptr2-ptr<<endl;  // int space between two pointer

    cout<<(ptr2 > ptr );
}