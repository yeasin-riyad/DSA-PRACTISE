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
void insertAtPosition(Node* &head,int pos,int val){
    Node* newNode=new Node(val);  // নতুন নোড তৈরি করা হচ্ছে
    if(pos==1){  // যদি পজিশন 1 হয়, তাহলে head কে নতুন নোডে আপডেট করা হচ্ছে
        newNode->next=head;
        head=newNode;
        return;
    }
    Node* temp=head;  // লিস্টের শুরু থেকে ট্রাভার্স করা হচ্ছে
    for(int i=1;i<pos-1;i++){  // পজিশন-1 পর্যন্ত ট্রাভার্স করা হচ্ছে
        temp=temp->next;
    }
    newNode->next=temp->next;  // নতুন নোডের next কে temp এর next এর সাথে যুক্ত করা হচ্ছে
    temp->next=newNode;  // temp এর next কে নতুন নোডে আপডেট করা হচ্ছে
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
    insertAtPosition(head,1,1);  // পজিশন 1 এ 1 ইনসার্ট করা হচ্ছে
    insertAtPosition(head,2,3);  // পজিশন 2 এ 3 ইনসার্ট করা হচ্ছে
    insertAtPosition(head,2,2);  // পজিশন 2 এ 2 ইনসার্ট করা হচ্ছে
    printList(head);  // লিস্ট প্রিন্ট করা হচ্ছে
    
    return 0;
}