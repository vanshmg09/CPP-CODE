#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool isDulicate(string str){
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];

        if(ch != ')'){
            s.push(ch);
        }else{
            if(s.top() == '('){
                return true;
            }

            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }

    return false;
}

int main(){
    string str1 = "((a+b))";
    string str2 = "((a+b) + (c+d))";

    cout<<isDulicate(str1)<<" \n";
    cout<<isDulicate(str2)<<" ";


}