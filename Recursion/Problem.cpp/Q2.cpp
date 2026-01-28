#include<iostream>
using namespace std;

void occurence(int arr[], int n, int target, int i ){
    if(i==n){
        return;
    }

    if(arr[i]==target){
        cout<<i<<", ";
    }

    occurence(arr,n,target,i+1);
}

int main(){
    int arr[] = {3,2,4,5,6,2,7,2,2};
    occurence(arr, 9, 2 , 0);
}