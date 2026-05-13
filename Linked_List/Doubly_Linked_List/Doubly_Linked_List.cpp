#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){  // Contructor name is same as class name
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      
    }
    cout<<endl;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        cin>>n;
        if(n==-1) break;  // -1 ইনপুট দিলে লুপ থেকে বের হয়ে যাবে

        insertAtTail(head,tail,n);  // লিস্টের শেষে n ইনসার্ট করা হচ্ছে
    }
    printList(head);
    
    return 0;
}