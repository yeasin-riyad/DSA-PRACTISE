#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){  // Contructor name is same as class name
        this->val=val;
        this->next=NULL;
    }
};

void insertAtTailOptimized(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);  // নতুন নোড তৈরি করা হচ্ছে
    if(head==NULL){  // যদি লিস্ট খালি থাকে, তাহলে head এবং tail কে নতুন নোডে আপডেট করা হচ্ছে
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;  // tail এর next কে নতুন নোডে আপডেট করা হচ্ছে
    tail=newNode;  // tail কে নতুন নোডে আপডেট করা হচ্ছে
}

// void delete_at_head(Node* &head){
//     head=head->next;
// }
void delete_at_head(Node* &head){
    if(head==NULL) return;  // যদি লিস্ট খালি থাকে, তাহলে ফাংশন থেকে বের হয়ে যাবে
    Node* deleteNode=head;  // deleteNode পয়েন্টার head কে পয়েন্ট করছে
    head=head->next;  // head কে head এর next এ আপডেট করা হচ্ছে
    delete deleteNode;  // মুক্ত করা হচ্ছে
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        cin>>val;
        if(val==-1) break;
        insertAtTailOptimized(head,tail,val);
        
    }
    delete_at_head(head);
    printList(head);
    
    return 0;
}