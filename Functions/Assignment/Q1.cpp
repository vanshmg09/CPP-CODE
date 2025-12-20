#include<iostream>
using namespace std;

void isPalindrom(int num){
    int ori = num;
    int rev = 0 ;

    while(num>0){
        int dig = num%10;
        rev = rev * 10 + dig;
        num /= 10;
    }

    ori == rev ? cout<< "Palindrom" : cout<< "Not Palindrom";
}

int main() {
    isPalindrom(321);

    return 0;
}