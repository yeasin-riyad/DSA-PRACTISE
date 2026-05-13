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

// void delete_at_tail(Node* &head){
//     if(head==NULL) return;  // যদি লিস্ট খালি থাকে, তাহলে ফাংশন থেকে বের হয়ে যাবে
//     if(head->next==NULL){  // যদি লিস্টে একটাই নোড থাকে, তাহলে head কে NULL করে দেওয়া হচ্ছে
//         delete head;  // head কে মুক্ত করা হচ্ছে
//         head=NULL;  // head কে NULL করা হচ্ছে
//         return;
//     }
//     Node* temp=head;  // লিস্টের শুরু থেকে ট্রাভার্স করা হচ্ছে
//     while(temp->next->next!=NULL){  // শেষ থেকে দ্বিতীয় নোড পর্যন্ত ট্রাভার্স করা হচ্ছে
//         temp=temp->next;
//     }
//     Node* deleteNode=temp->next;  // deleteNode পয়েন্টার temp এর next কে পয়েন্ট করছে (শেষ নোড)
//     temp->next=NULL;  // temp এর next কে NULL করা হচ্ছে (শেষ নোড মুছে ফেলা হচ্ছে)
//     delete deleteNode;  // deleteNode কে মুক্ত করা হচ্ছে
// }

void deleteAtTail(Node* &head){
    if(head==NULL) return;
    if(head->next==NULL){
        delete head;
        head==NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=NULL;
    delete deleteNode;
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
    deleteAtTail(head);
    printList(head);
    
    return 0;
}