#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 0;

    for(int i=1; i<=n; i++){
        num=i;
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<num;
            num--;
        }
        num=2;
        for(int k=2; k<=i; k++){
            cout<<num;
            num++;
        }

        cout<<endl;
    }
}