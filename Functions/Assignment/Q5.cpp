#include<iostream>
using namespace std;

char nextChar(char ch){
    if(ch=='z'){
        return 'a';
    }

    return ++ch;
}

int main(){
    cout<< nextChar('c');

    return 0;
}