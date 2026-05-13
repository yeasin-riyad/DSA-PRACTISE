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
    Node* tail=NULL;  // tail কে NULL দিয়ে শুরু করা হচ্ছে
    insertAtTailOptimized(head,tail,1);  // লিস্টের শেষে 1 ইনসার্ট করা হচ্ছে
    insertAtTailOptimized(head,tail,2);  // লিস্টের শেষে 2 ইনসার্ট করা হচ্ছে
    insertAtTailOptimized(head,tail,3);  // লিস্টের শেষে 3 ইনসার্ট করা হচ্ছে
    printList(head);  // লিস্ট প্রিন্ট করা হচ্ছে
    
    return 0;
}