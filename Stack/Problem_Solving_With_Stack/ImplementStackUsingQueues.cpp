//Implement Stack using Queues
//Implement a last-in-first-out (LIFO) stack using only two queues. 
//The implemented stack should support all the functions of a 
//normal stack (push, top, pop, and empty).
#include<bits/stdc++.h>
using namespace std;
class MyStack {
private:
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
    }
    void push(int x) {
        q1.push(x);
    }
    void pop() {
        if(q1.empty()) return;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1,q2); // swap means q1 becomes q2 and q2 becomes q1
    }
    int top() {
        if(q1.empty()) return -1;
        return q1.back();
    }
    bool empty() {
        return q1.empty();
    }


};
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    MyStack s;
    cout << "Enter the number of elements to push: ";
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element to push: ";
        cin >> x;
        s.push(x);
    }
    cout << "Stack elements are: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
   
    return 0;
}