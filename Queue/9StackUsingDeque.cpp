#include<iostream>
#include<deque>

using namespace std;

class Stack{
    deque<int> d;

    public:

    void push(int num){
        d.push_front(num);
    }

    void pop(){
        d.pop_front();
    }

    int top(){
        return d.front();
    }

    bool empty(){
        return d.empty();
    }
};

int main(){
    Stack s;

    for(int i=1; i<=5; i++){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}