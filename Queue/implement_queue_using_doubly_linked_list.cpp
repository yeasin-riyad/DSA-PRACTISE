#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

class Queue{
private:
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(int x){
        Node* newNode = new Node(x);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void dequeue(){
        if(head == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        else{
            tail = NULL;
        }
        delete temp;
        size--;
    }

    int front(){
        if(head == NULL){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->data;
    }

    int back(){
        if(tail == NULL){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return tail->data;
    }

    int Size(){
        return size;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    Queue q;
        cout << "Enter the number of elements to enqueue: ";
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element to enqueue: ";
        cin >> x;
        q.enqueue(x);
    }
    cout << "Front element is: " << q.front() << endl;
    cout << "Back element is: " << q.back() << endl;
    cout << "Size of queue is: " << q.Size() << endl;
    cout << "Elements in queue are: ";
    q.display();
    cout << "Enter the number of elements to dequeue: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        q.dequeue();
    }
    cout << "Front element after dequeue is: " << q.front() << endl;
    cout << "Back element after dequeue is: " << q.back() << endl;
    cout << "Size after dequeue is: " << q.Size() << endl;
    cout << "Elements in queue after dequeue are: ";
    q.display();
    return 0;
}