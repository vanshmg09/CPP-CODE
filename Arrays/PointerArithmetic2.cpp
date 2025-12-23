//Addition and substraction of constant

#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int *ptr = &a;
    
    // cout<<ptr<<endl;
    // cout<<ptr + 3<<endl;

    int arr[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){
        cout<<*(arr + i)<<" ";
    }


}