#include<iostream>
#include<climits>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


void countingSort(int arr[], int n) {
    int freq[100000] = {0};
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minNum = min(minNum,arr[i]);
        maxNum = max(maxNum,arr[i]);
    }

    for(int i=minNum, j=0; i<=maxNum; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }

    printArr(arr,n);
}



int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr,n);

    return 0;
}