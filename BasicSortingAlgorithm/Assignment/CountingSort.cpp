#include<iostream>
#include<climits>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void countingSort(int arr[], int n){
    int freq[100000]={0};
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    for(int i=maxVal, j=0; i>=minVal; i--){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    printArr(arr,n);


}

int main(){
    int arr[] ={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr,n);

    return 0;
}