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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head=new Node(1);  
    Node* second=new Node(2);
    Node* third=new Node(3);
    head->next=second;
    second->next=third;

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      
    }
    
    return 0;
}