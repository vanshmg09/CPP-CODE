#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    public:
        Node(int val){
            data = val;
            next = NULL;
        }

        ~Node(){
            // cout<<" ~Node "<<data;
            if(next != NULL){
                delete next;
                next = NULL;
                // cout<<" del "<<data;
            }
        }

    friend class List;
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = NULL;
            tail = NULL;
        }

        ~List(){
            // cout<<"~List";
            if(head != NULL){
                delete head;
                head = NULL;
            }
        }

        void push_front(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            } else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            
            if(head == NULL){
                head = tail = newNode;
            } else {
                tail -> next = newNode;
                tail = newNode;
            }
        }

        void printList(){
            Node* temp = head;

            while(temp != NULL){
                cout<< temp -> data<<"->";
                temp = temp -> next;
            }
            cout<<"NULL\n";
        }

        void insert(int val, int pos){
            Node* newNode = new Node(val);
            Node* temp = head;

            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout<<"Invalid postion";
                    return;
                }
                temp = temp -> next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }

        void pop_front(){
            if(head == NULL){
                cout<<"List empty";
                return;
            }

            Node* temp = head;
            head = temp -> next;
            temp -> next = NULL;
            delete temp;
        }

        void pop_back(){
            Node* temp = head;

            while(temp -> next -> next != NULL){
                temp = temp -> next;
            }

            temp -> next = NULL;
            delete tail;
            tail = temp;
        }

        int searchItr(int key){
            Node* temp = head;
            int idx = 0;
            while(temp  != NULL){
                if(temp -> data == key){
                    return idx;
                }
                idx++;
                temp = temp -> next;
            }
            return -1;
        }

        int helper(Node* h, int key){
            if(h == NULL){
                return -1;
            }

            if(h -> data == key){
                return 0;
            }

            int idx = helper(h -> next, key);

            if(idx == -1){
                return -1;
            }
            return idx + 1;
        }

        int searchRec(int key){
            return helper(head, key);
        }

        void reverse(){
            Node* curr = head;
            Node* pre = NULL;
            tail = head;

            while(curr != NULL){
                Node* next = curr -> next;
                curr -> next = pre;
                
                //updation
                pre = curr;
                curr = next;
            }
            head = pre;
        }

        int getSize(){
            Node* temp = head;
            int sz = 0;

            while(temp != NULL){
                temp = temp->next;
                sz++;
            }
            return sz;
        }

        void removeNth(int n){
            Node* pre = head;
            int size = getSize();

            for(int i=1; i<(size-n); i++){
                pre = pre->next;
            }

            pre->next = pre->next->next;
        }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    ll.removeNth(1);
    ll.printList();



}