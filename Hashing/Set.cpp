#include <iostream>

#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(9);
    s.insert(15);
    s.insert(52);

    cout<<s.size()<<"\n";

    for(int el : s){
        cout<<el<<" ";
    }

    cout<<"\n";

    if(s.find(5) != s.end()){
        cout<<"exist";
    }else{
        cout<<"not";
    }


}