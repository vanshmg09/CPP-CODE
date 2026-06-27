#include <iostream>
#include <vector>
#include <set>
using namespace std;

int countDistinct(vector<int> arr){
    set<int> s;

    for(int i=0; i<arr.size(); i++){
        s.insert(arr[i]);
    }

    return s.size();
}

int main(){
    vector<int> arr = {7,4,4,5,6,5,6,2,1,7};
    cout<<countDistinct(arr);
}