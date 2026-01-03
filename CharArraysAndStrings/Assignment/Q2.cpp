#include<iostream>
#include<string>
using namespace std;

bool isEqual(string s1, string s2){
    int pos[2];
    int idx = 0;
    for(int i=0; i<s2.length(); i++){
        if(s1[i] != s2[i]){
            pos[idx++] = i;
        }
    }
    
    swap(s2[pos[0]], s2[pos[1]]);

    if(s1 == s2){
        return true;
    }

    return false;
}

int main(){
    string s1 = "bank";
    string s2 = "kanm";

    cout<<isEqual(s1,s2);
}