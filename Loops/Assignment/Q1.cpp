#include<iostream>
using namespace std;

int main(){
    int n;
    int factorial = 1;

    cout<< "Enter n: ";
    cin>>n;

    if(n == 0){
        cout<<"Factorial = "<< factorial;
    }else if(n<0){
        cout<<"Factorial not exits";
    }else{
        for(int i=1; i<=n; i++){
            factorial*=i;
        }
        cout<<"Factorial = "<< factorial;
    }

    return 0;
}