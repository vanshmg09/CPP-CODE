// Increment and Decrement Operation

#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout<<ptr<<endl; 
    ptr++; // + 1 int (4byte)
    cout<<ptr<<endl;
    ptr--; // -1 int 
    cout<<ptr<<endl;

    char ch = 'a';
    char *ptr2 = &ch;

    cout<<(void*)ptr2<<endl; 
    ptr2++; // + 1 int (4byte)
    cout<<ptr2<<endl;
    ptr2--; // -1 int 
    cout<<ptr2<<endl;

    
}