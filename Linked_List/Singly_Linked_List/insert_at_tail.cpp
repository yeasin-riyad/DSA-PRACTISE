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
void insertAtTail(Node* &head,int val){
    Node* newNode=new Node(val);  // নতুন নোড তৈরি করা হচ্ছে
    if(head==NULL){  // যদি লিস্ট খালি থাকে, তাহলে head কে নতুন নোডে আপডেট করা হচ্ছে
        head=newNode;
        return;
    }
    Node* temp=head;  // লিস্টের শুরু থেকে ট্রাভার্স করা হচ্ছে
    while(temp->next!=NULL){  // লিস্টের শেষ পর্যন্ত ট্রাভার্স করা হচ্ছে
        temp=temp->next;
    }
    temp->next=newNode;  // লিস্টের শেষ নোডের next কে নতুন নোডে আপডেট করা হচ্ছে
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
    Node* head=NULL;  // খালি লিস্ট তৈরি করা হচ্ছে
    insertAtTail(head,1);  // লিস্টের শেষে 1 ইনসার্ট করা হচ্ছে
    insertAtTail(head,2);  // লিস্টের শেষে 2 ইনসার্ট করা হচ্ছে
    insertAtTail(head,3);  // লিস্টের শেষে 3 ইনসার্ট করা হচ্ছে
    printList(head);  // লিস্ট প্রিন্ট করা হচ্ছে

    return 0;
}