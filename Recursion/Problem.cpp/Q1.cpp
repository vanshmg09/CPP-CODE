#include<iostream>
using namespace std;

int binarySearch(int arr[], int st, int end, int target ){
    if(st>end){
        return -1;
    }

    int mid = (st+end)/2;
    if(arr[mid]==target){
        return mid;
    } else if(arr[mid]>target){
        end = mid - 1;
    } else{
        st = mid + 1;
    }

    return binarySearch(arr, st, end, target);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    cout<<binarySearch(arr,0,size-1,1);
}