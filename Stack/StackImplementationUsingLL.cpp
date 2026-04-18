#include <iostream>
#include <list>
#include <stack>
using namespace std;


// template <class T>
// class Stack{
//     list<T> ll;
// public:
//     void push(T val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     T top(){
//         return ll.front();
//     }

//     bool isEmpty(){
//         return ll.size() == 0;
//     }

// };

// int main(){
//     Stack <char> s;
//     s.push('a');
//     s.push('b');
//     s.push('c');

//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }

// }


// --------------------------------------------------
template <class T>

class Node{
    public:
    T data;
    Node<T> * next;

    Node(T val){
        data = val;
        next = NULL;
    }

};

template <class T>
class Stack{
    Node<T>* head;
public:
    void push(T val){
        Node<T> *newNode = new Node<T>(val);
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        if(isEmpty()){
            return;
        }else{
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        }
    }

    T top(){
        return head->data;
    }

    bool isEmpty(){
        return head == NULL;
    }

};

int main(){
    // using class
    // Stack <char> s;

    // using STL
    stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}

