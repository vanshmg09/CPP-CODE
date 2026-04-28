#include<iostream>
#include<deque>

using namespace std;

class Queue{
    deque<int> d;
    public: 

    void push(int num){
        d.push_back(num);
    }

    void pop(){
        d.pop_front();
    }

    int front(){
        return d.front();
    }

    bool empty(){
        return d.empty();
    }
};

int main(){
    Queue q;

    for(int i=1; i<=5; i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}