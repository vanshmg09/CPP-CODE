#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool validPParantheses(string str){
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];

        if(ch == '(' || ch == '[' || ch == '{' ){//open
            s.push(ch);
        }else{//close
            if(s.empty()){
                return false;
            }

            char top = s.top();
            if((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']') ){
                s.pop();
            }else{
                return false;
            }
        }
    }

    return s.empty();
}

int main(){
    string str1 = "([}])";
    string str2 = "([{}])";

    cout<<validPParantheses(str1)<<"\n";
    cout<<validPParantheses(str2)<<"\n";


}