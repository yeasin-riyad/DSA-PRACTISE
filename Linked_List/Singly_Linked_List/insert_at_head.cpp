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

void insertAtHead(Node* &head,int val){
    Node* newNode=new Node(val);  // নতুন নোড তৈরি করা হচ্ছে
    newNode->next=head;  // নতুন নোডের next কে head এর সাথে যুক্ত করা হচ্ছে
    head=newNode;  // head কে নতুন নোডে আপডেট করা হচ্ছে
};

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
    // Node* head=new Node(1); // head এর মান 1 দিয়ে শুরু করা হচ্ছে
    Node* head=NULL;  // খালি লিস্ট তৈরি করা হচ্ছে
    insertAtHead(head,0);  // head এর আগে 0 ইনসার্ট করা হচ্ছে
    insertAtHead(head,-1);  // head এর আগে -1 ইনসার্ট করা হচ্ছে
    printList(head);  // লিস্ট প্রিন্ট করা হচ্ছে

    
    return 0;
}