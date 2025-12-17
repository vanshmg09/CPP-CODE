#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    
    
    cout<<"Enter n: ";
    cin>>n;
     
    int i= 2;
    while(i<=n){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
        i++;
    }
        



    return 0;
}