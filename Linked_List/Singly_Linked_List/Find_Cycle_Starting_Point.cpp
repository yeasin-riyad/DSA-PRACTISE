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


// slow and fast cycle detection and cycle starting point
Node* detect_cycle_starting_point(Node* head){

    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){

            Node* ptr1 = head;
            Node* ptr2 = slow;

            while(ptr1 != ptr2){
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            return ptr1;
        }
    }

    return NULL;
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

    // cycle তৈরি
    tail->next = head->next; // cycle starts at 2nd node

    Node* cycleStart = detect_cycle_starting_point(head);

    if(cycleStart){
        cout << "Cycle Detected\n";
        cout << "Cycle starts at node value: "
             << cycleStart->val << endl;
    }
    else{
        cout << "Cycle Not Found\n";
    }

    return 0;
}