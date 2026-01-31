#include<iostream>
#include<vector>
#include<string>
using namespace std;

void display(string arr[] ,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(string arr[], int si, int mid, int ei){
    vector<string>temp;
    int idx = 0;
    int i = si;
    int j = mid+1;

    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            // temp[idx++] = arr[i++];
            temp.push_back(arr[i++]);

        }else{
            // temp[idx++] = arr[j++];
            temp.push_back(arr[j++]);

        }
    }

    while(i<=mid){
            // temp[idx++] = arr[i++];
            temp.push_back(arr[i++]);
    }

    while(j<=ei){
            // temp[idx++] = arr[j++];
            temp.push_back(arr[j++]);
    }

    for(int i=si, x=0; i<=ei; i++){
        arr[i] = temp[x++];
    }
}

void mergeSort(string arr[], int si, int ei){
    if(si>=ei){
        return;
    }

    int mid = si + (ei-si)/2;

    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);

    merge(arr, si, mid, ei);
}

int main(){
    string arr[4] = {"sun", "earth", "mars", "mercury"};
    int n = 4;
    display(arr,n);

    mergeSort(arr,0,n-1);
    display(arr,n);
}