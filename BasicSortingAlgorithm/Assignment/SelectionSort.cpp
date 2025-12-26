#include<iostream>
#include<climits>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIdx]<arr[j]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

    printArr(arr,n);
}

int main(){
    int arr[] ={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr,n);

    return 0;
}