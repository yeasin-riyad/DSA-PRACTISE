#include<bits/stdc++.h>
using namespace std;

class myStack{

public:

// time complexity of all operations is O(1)
    vector<int> arr;

    // push
    void push(int x){
        arr.push_back(x);
    }

    // pop
    void pop(){

        if(!arr.empty()){
            arr.pop_back();
        }
    }

    // top
    int top(){

        if(!arr.empty()){
            return arr.back();
        }

        return -1;
    }

    // size
    int size(){
        return arr.size();
    }

    // empty
    bool empty(){
        return arr.empty();
    }

    // display
    void display(){

        for(int i = arr.size()-1; i >= 0; i--){
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    myStack s;

    int n, x;

    cout << "Enter the number of elements to push: ";

    cin >> n;

    for(int i = 0; i < n; i++){

        cout << "Enter element to push: ";

        cin >> x;

        s.push(x);
    }

    cout << "Top element is: "
         << s.top() << endl;

    cout << "Size of stack is: "
         << s.size() << endl;

    cout << "Enter the number of elements to pop: ";

    cin >> n;

    for(int i = 0; i < n; i++){

        if(!s.empty()){
            s.pop();
        }
    }

    cout << "Top element after pop is: "
         << s.top() << endl;

    cout << "Size after pop is: "
         << s.size() << endl;

    cout << "Elements in stack:\n";

    s.display();

    cout << "Enter number of elements to display: ";

    cin >> n;

    for(int i = 1; i <= n; i++){

        if(s.empty()){
            cout << "Stack is empty\n";
            break;
        }

        cout << "Element at position "
             << i
             << " from top is: "
             << s.top()
             << endl;

        s.pop();
    }

    return 0;
}