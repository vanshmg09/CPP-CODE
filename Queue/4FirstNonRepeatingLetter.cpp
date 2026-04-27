#include<iostream>
#include<queue>

using namespace std;

void FirstNonRepeat(string str){
    int freq[26] = {0};
    queue<char> q;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);

        while(!q.empty() && freq[q.front()-'a'] > 1){
            q.pop();
        }

        if(q.empty()){
            cout<<"-1\n";
        }else{
            cout<<q.front()<<"\n";
        }
    }
}

int main(){
    string str = "aabccxb";
    FirstNonRepeat(str);
}