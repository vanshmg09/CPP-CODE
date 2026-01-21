#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> vec ,int target , int i=0){
    int n = vec.size();
    if(i == n){
        return -1;
    }

    if(vec[i]== target){
        return i;
    }

    return firstOccurence(vec, target, i+1);
}

int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<<firstOccurence(vec,3,0);
}