#include<iostream>
using namespace std;

class Print{
public:
    void print(int n){
        cout<<n<<endl;
    }

    void print(string string){
        cout<<string<<endl;
    }
};

int main(){
    Print p;
    p.print(5);
    p.print("hello");
}