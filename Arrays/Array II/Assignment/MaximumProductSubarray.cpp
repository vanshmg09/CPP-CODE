#include<iostream>
#include<climits>
using namespace std;

int maxProduct(int nums[], int n){
    int maxPro = INT_MIN;
    for(int start=0; start<n; start++){
        int currPro = 1;
        for(int end=start; end<n; end++){
            currPro *= nums[end];
            maxPro = max(maxPro,currPro);
        }
    }

    return maxPro;
}

int main(){
    int nums[] = {2,3,-2,4};
    int n = sizeof(nums)/sizeof(int);

    cout<<maxProduct(nums,n);
    
}