#include<iostream>
#include<string>
using namespace std;

int validSubstring(string s){
    if(s.length()==1){
        return 1;
    }

    int count = 0;
    if(s[0]==s[s.length()-1]){
        count++;
    }

    count += validSubstring(s.substr(0,s.length()-1));

    count += validSubstring(s.substr(1,s.length()));

    count -= validSubstring(s.substr(1,s.length()-1));

    return count;

}

int main(){
    string s = "abca";
    cout<<validSubstring(s);
}