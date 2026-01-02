#include<iostream>
#include<string.h>
using namespace std;

void reverse(char word[], int n){
    int st = 0 , end = n-1;
    while(st<end && end>st){
        swap(word[st],word[end]);
        st++;
        end--;
    }

    cout<<word;
}


int main(){
    char word[] = "code";

    reverse(word,strlen(word));
}