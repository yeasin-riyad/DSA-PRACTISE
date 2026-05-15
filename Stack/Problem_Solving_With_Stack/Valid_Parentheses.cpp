// Valid Parentheses

// Given a string s containing just the characters '(', ')', '{', '}', '[' , ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    string s;
    cout << "Enter the string: ";
    cin >> s;
    stack<char> st;
    bool isValid = true;
    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }
        else{
            if(st.empty()){
                isValid = false;
                break;
            }
            char top = st.top();
            st.pop();
            if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')){
                isValid = false;
                break;
            }
        }
    }
    if(!st.empty()){
        isValid = false;
    }
    if(isValid){
        cout << "Valid parentheses" << endl;
    }
    else{
        cout << "Invalid parentheses" << endl;
    }
    return 0;
}