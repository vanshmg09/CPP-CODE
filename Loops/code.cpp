#include<iostream>
using namespace std;

int main() {
    int i=1;

    while(true){
       int n ;
       cout<<"Enter n: ";
       cin>> n;
       if(n%10 == 0){
        continue;
       }
       cout<<"You entered: "<<n<<endl;
    }
     
    cout<<"finish";

    return 0 ;
}