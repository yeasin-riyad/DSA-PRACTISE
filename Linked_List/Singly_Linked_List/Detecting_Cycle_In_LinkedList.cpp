#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTailOptimized(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}


//তুমি এখানে Floyd’s Cycle Detection Algorithm (Tortoise and Hare Algorithm) 
//ব্যবহার করেছো, যা linked list এ cycle detect করার সবচেয়ে efficient 
//উপায়গুলোর একটি।
bool detect_cycle(Node* head){

    if(head == NULL) return false;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val;

    Node* head = NULL;
    Node* tail = NULL;

    while(true){

        cin >> val;

        if(val == -1) break;

        insertAtTailOptimized(head, tail, val);
    }

    // Cycle তৈরি করা হচ্ছে
    tail->next = head;

    if(detect_cycle(head)){
        cout << "Cycle Detected\n";
    }
    else{
        cout << "Cycle Not Found\n";
    }

    return 0;
}