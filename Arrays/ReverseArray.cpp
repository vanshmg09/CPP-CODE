#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);


// Reverse Array with space
    // int copyArr[n];

    // for(int i=0; i<n; i++){
    //     int j = n-i-1;
    //     copyArr[i] = arr[j];
    // }

    // for(int i=0; i<n; i++){
    //     arr[i] = copyArr[i];
    // }

    // printArr(arr,n);

// Reverse Array without space
    int start = 0 , end = n-1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    
    printArr(arr,n);


    return 0;
}