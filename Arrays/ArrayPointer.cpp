#include<iostream>
using namespace std;

int main(){
    int arr[5]; // constant pointer

    int x = 5;

    arr = &x; //not possible

    cout<<arr;
}