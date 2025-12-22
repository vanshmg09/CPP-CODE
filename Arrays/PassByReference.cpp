//Array are passed by reference

#include<iostream>
using namespace std;

// void fun(int num[]){
//     num[0] = 100;
// }


void fun(int *ptr , int n){
    *ptr = 100;
    
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<"\n ";
    }
}

int main(){

    int arr[] = {1,2,3,4,5};

    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;

    int n = sizeof(arr)/sizeof(int);

    fun(arr,n);
    cout<<arr[0]<<endl;
    cout<<sizeof(arr)<<endl;



}