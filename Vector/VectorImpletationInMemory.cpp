#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4};

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
}