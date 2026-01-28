#include<iostream>
using namespace std;

void towerOfHanol(int n, string scr, string helper, string dest){
    if(n==1){
        cout<<"transfer" <<n<< "from "<<scr<<" to "<<dest<<endl;
        return;
    }

    towerOfHanol(n-1,scr,dest,helper);

    cout<<"transfer" <<n<< "from "<<scr<<" to "<<helper<<endl;

    towerOfHanol(n-1,helper,scr,dest);
    
    
}

int main(){
    towerOfHanol(3,"A","B","C");
}