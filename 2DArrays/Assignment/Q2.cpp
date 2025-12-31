#include<iostream>
using namespace std;

int sum(int nums[][3], int n, int m){
    int sum = 0;

    for(int j=0; j<n; j++){
        sum += *(*(nums+1)+j);
    }

    return sum;
}

int main(){
    int nums[][3] = {{1,4,9},{11,4,3},{2,2,3}};

    cout<<sum(nums,3,3);
}