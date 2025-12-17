#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    int ori = n;
    
    cout<<"Enter n: ";
    cin>>n;
    

    while(n>0){
        int dig = n%10;
        n/=10;
        sum+=(dig* dig * dig);
    }

    ori==sum ? cout<<"Armstrong Number" : cout<<"Not Armstrong Number " ;

    return 0;
}