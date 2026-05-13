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

// void reversePrint(Node* head){
//     if(head==NULL) return;  // বেস কেস: যদি লিস্ট খালি থাকে, তাহলে ফাংশন থেকে বের হয়ে যাবে
//     reversePrint(head->next);  // রিকার্সিভ কল: পরবর্তী নোডে কল করা হচ্ছে
//     cout<<head->val<<" ";  // বর্তমান নোডের মান প্রিন্ট করা হচ্ছে
// }

void reverse_print(Node* head){
    if(head==NULL) return ;
    reverse_print(head->next);
    cout<<head->val<<" ";
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
    reverse_print(head);
    
    return 0;
}