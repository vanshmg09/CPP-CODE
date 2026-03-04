#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    
        Node(int val){
            data = val;
            next = NULL;
        }

        ~Node(){
            // // cout<<" ~Node "<<data;
            // if(next != NULL){
            //     delete next;
            //     next = NULL;
            //     // cout<<" del "<<data;
            // }
        }

    // friend class List;
};

class List{
    
    public:
        Node* head;
        Node* tail;

        List(){
            head = NULL;
            tail = NULL;
        }

        ~List(){
            // cout<<"~List";
            // if(head != NULL){
            //     delete head;
            //     head = NULL;
            // }
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

void printList(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp -> data<<"->";
            temp = temp -> next;
        }
        cout<<"NULL\n";
}

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL){
        prev->next = NULL; //split at mid
    }

    return slow; //slow = rightHead
}

Node* merge(Node* leftHead, Node* rightHead){
    List ans;
    Node* i = leftHead;
    Node* j = rightHead;

    while(i!=NULL && j!=NULL){

        if(i->data <= j->data){
            ans.push_back(i->data);
            i = i->next;
        }else{
            ans.push_back(j->data);
            j = j->next;
        } 
    }

    while(i!=NULL){
        ans.push_back(i->data);
        i = i->next;
    }

    while(j!=NULL){
        ans.push_back(j->data);
        j = j->next;
    }

    //Another way if I use destructor
    // Node* res = ans.head;
    // ans.head = NULL;
    // ans.head = NULL;

    return ans.head;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* rightHead = splitAtMid(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left, right);

}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

Node* zigZagLL(Node* head){
    Node* rightHead = splitAtMid(head);
    Node* rightHeadRev = reverse(rightHead);

    Node* left = head;
    Node* right = rightHeadRev;
    Node* tail = right;

    while(left!=NULL && right!=NULL){
        Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;
        tail = right;

        left = nextLeft;
        right = nextRight;
    }

    if(right!=NULL){
        tail->next = right;
    }

    return head;
}

int main(){
    List ll;
    
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    printList(ll.head);
    ll.head = zigZagLL(ll.head);
    printList(ll.head);


}