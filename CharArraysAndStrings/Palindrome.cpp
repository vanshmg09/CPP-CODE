#include<iostream>
#include<string.h>
using namespace std;

bool isPallindrom(char word[], int n){
    int st = 0, end = n-1;
    while(st<end){
        if(word[st] == word[end]){
            st++;
            end--;
        }else{
            cout<<"not valid pallindrom";
            return false;
        }
    }
    cout<<"valid pallindrom";
    return true;
}

int main(){
    char word[] = "aabaa";

    isPallindrom(word, strlen(word));
}