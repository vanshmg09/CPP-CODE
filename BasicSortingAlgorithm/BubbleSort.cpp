#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int *arr, int n){
    bool isSwap = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(!isSwap){
            return;
        }
    }
    printArr(arr,n);

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr,n);

    return 0;
}