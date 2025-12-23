#include<iostream>
#include<climits>
using namespace std;

//Brite Force Approuch
void maxSubarraySum(int *arr, int n){
    int sum = 0;
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            sum = 0;
            for(int i=start; i<=end; i++){
                sum += arr[i];
            }
            cout<<sum<<", ";
            maxSum = max(sum,maxSum);
        }
        cout<<endl;
    }

    cout<<"Maximum subarry sum = "<<maxSum;
}

//Optimize way
void maxSubarraySum2(int *arr, int n){
    int sum = 0;
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){
        sum = 0;
        for(int end=start; end<n; end++){

            sum += arr[end];
            maxSum = max(sum,maxSum);
        }
    }

    cout<<"Maximum subarry sum = "<<maxSum;
}

// Kadane's Algorithm

void maxSubarraySum3(int *arr, int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout<<"Maximum subarry sum = "<<maxSum;
}


int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum3(arr,n);

    return 0;

}