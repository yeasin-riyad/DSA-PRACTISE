#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
     list<int> dll;
    // push
    void push(int x){
        dll.push_back(x);
    };
    // pop
    void pop(){
        if(!dll.empty()){
            dll.pop_back();
        }
    };
    // top
    int top(){
        if(!dll.empty()){
            return dll.back();
        }
        return -1;
    };
    // size
    int size(){
        return dll.size();
    };
    // empty
    bool empty(){
        return dll.empty();
    };

    // display
    void display(){
        // display from top to bottom
        //rbegin() points to the last element and rend() points to the element before the first element
        for(auto it = dll.rbegin(); it != dll.rend(); it++){
            cout << *it << " ";
        }
        cout << endl;
    };
};
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    myStack s;
    cout << "Enter the number of elements to push: ";
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element to push: ";
        cin >> x;
        s.push(x);
    }

    cout << "Size of stack is: " << s.size() << endl;
    cout << "Top element is: " << s.top() << endl;
    cout << "Enter the number of elements to pop: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        s.pop();
    }
    cout << "Stack after popping " << n << " elements: ";
    s.display();

    cout << "Enter number of elements to display: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << "Element at position " << i << " from top: " << s.top() << endl;
        s.pop();
    }
    return 0;
}