// Min Stack
// Design a stack that supports push, pop, top,
// and retrieving the minimum element in constant time.

#include <bits/stdc++.h>
using namespace std;
class MinStack
{
private:
    stack<int> st;
    stack<int> minSt;

public:
    // constructor
    MinStack() {}
    void push(int val)
    {
        st.push(val);
        if (minSt.empty() || val <= minSt.top())
        {
            minSt.push(val);
        }
    }
    void pop()
    {
        if (!st.empty())
        {
            if (st.top() == minSt.top())
            {
                minSt.pop();
            }
            st.pop();
        }
    }
    int top()
    {
        return st.top();
    }
    int getMin()
    {
        return minSt.top();
    }
    
};
int main()
{
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Minimum element is: " << minStack.getMin() << endl; // return -3
    minStack.pop();
    cout << "Top element is: " << minStack.top() << endl; // return 0
    cout << "Minimum element is: " << minStack.getMin() << endl; // return -2
    
    return 0;
}