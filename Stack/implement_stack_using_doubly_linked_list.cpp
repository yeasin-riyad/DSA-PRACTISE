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
class Stack{
private:
    Node* top;
    int size;
public:
    Stack(){
        top = NULL;
        size = 0;
    }
    void push(int x){
        Node* newNode = new Node(x);
        if(top == NULL){
            top = newNode;
        }
        else{
            top->next = newNode;
            newNode->prev = top;
            top = newNode;
        }
        size++;
    }
    void pop(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->prev;
        if(top != NULL){
            top->next = NULL;
        }
        delete temp;
        size--;
    }
    int topElement(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }
    int Size(){
        return size;
    }

    void display(){
        Node* temp = top;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    Stack s;
    cout << "Enter the number of elements to push: ";
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element to push: ";
        cin >> x;
        s.push(x);
    }
    cout << "Top element is: " << s.topElement() << endl;
    cout << "Size of stack is: " << s.Size() << endl;
    cout << "Enter the number of elements to pop: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        s.pop();
    }
    cout << "Top element after pop is: " << s.topElement() << endl;
    cout << "Size after pop is: " << s.Size() << endl;
    cout << "Elements in stack are: ";
    s.display();
    
    return 0;
}