#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int num = 1;
    int start = 1;

    for(int i=1; i<=n; i++){
        num = start;
        for(int j=1; j<=i; j++){
            cout<<num;
            num == 1 ? num = 0 : num = 1 ;
        }
        cout<<endl;
        start == 0 ? start = 1 : start = 0 ;
    }

    
    return 0;
    
}