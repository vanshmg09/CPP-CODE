#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>vec, int tar){
    int n = vec.size();
    int st = 0, end = n-1;
    vector<int>ans;

    while(st<end){
        int sum = vec[st] + vec[end];
        if(sum == tar){
            ans = {st,end};
            return ans;
        }else if(sum>tar){
            end--;
        }else{
            st++;
        }
    }
}

int main(){
    vector<int>vec = {2,7,11,15};
    int target = 9;

    vector<int>ans = pairSum(vec,9);
    cout<<ans[0]<<", "<<ans[1];
    return 0;
}