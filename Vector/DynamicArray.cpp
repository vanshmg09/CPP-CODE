#include<iostream>
using namespace std;

void func(){
    int size;
    cin>>size;

    int *arr = new int[size];

    int x=1;
    for(int i=0; i<size; i++){
        arr[i] = x;
        cout<<arr[i]<<" ";
        x++;
    }

    cout<<endl;
    delete [] arr;
}

void funcInt(){
    int *ptr = new int;
    *ptr = 6;
    cout<<*ptr;

    delete ptr;
}

int main() {
    func();
    funcInt();
}