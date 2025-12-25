#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7] = {15,6,1,4,8,7,6};

    sort(arr,arr+7,greater<int>());

    printArr(arr,7);
    
}