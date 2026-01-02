#include<iostream>
#include<string.h>
using namespace std;

void lower(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='a' && ch<='z'){
            continue;
        } else {
            int pos = ch - 'A';
            word[i] = 'a' + pos ;
        }
    }

    cout<<word<<endl;
}

int main(){
    char word[] = "ApPle";

    lower(word,5);

    for(int i=0; i<strlen(word); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            int pos = word[i] -'a';
            word[i] = 'A' + pos;
        }
    }

    cout<<word;
}