//-----------------------> Student Record System Using Singly Linked List

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    string name;
    string department;
    Student* next;
    Student(int id,string name,string department){
        this->id=id;
        this->name=name;
        this->department=department;
        this->next=NULL;
    }
};

void insertAtTail(Student* &head,Student* &tail,int id,string name,string department){
    Student* newNode=new Student(id,name,department);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void displayStudents(Student* head){
    Student* temp=head;
    while(temp!=NULL){
        cout<<"ID: "<<temp->id<<", Name: "<<temp->name<<", Department: "<<temp->department<<endl;
        temp=temp->next;
    }
}

void deleteStudentById(Student* &head,int id){
    if(head==NULL) return;
    if(head->id==id){
        Student* deleteNode=head;
        head=head->next;
        delete deleteNode;
        return;
    }
    Student* temp=head;
    while(temp->next!=NULL && temp->next->id!=id){
        temp=temp->next;
    }
    if(temp->next==NULL) return; // Student with given ID not found
    Student* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}

bool searchStudentById(Student* head,int id){
    Student* temp=head;
    while(temp!=NULL){
        if(temp->id==id) return true;
        temp=temp->next;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Student* head=NULL;
    Student* tail=NULL;
    int n;
    while(true){
        cout<<"Enter student ID (or -1 to stop): ";
        cin>>n;
        if(n==-1) break;
        string name, department;
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student department: ";
        cin>>department;
        insertAtTail(head,tail,n,name,department);
    }
    cout<<"\nStudent Records:\n";
    displayStudents(head);

    
    return 0;
}