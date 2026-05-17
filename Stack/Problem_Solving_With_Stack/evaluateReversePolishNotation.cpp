//Evaluate Reverse Polish Notation
//Time Complexity: O(n)
//Space Complexity: O(n)
// Reverse Polish Notation (RPN) কী? 🔥
// Reverse Polish Notation হলো:

// এমন একটা mathematical expression format
// যেখানে operator পরে থাকে।

// উদাহরণস্বরূপ, normal infix notation এ আমরা লিখি: 3 + 4 * 2 / ( 1 - 5 ) ^ 2 ^ 3
// কিন্তু RPN এ আমরা লিখব: 3 4 2 * 1 5 - 2 3 ^ ^ / +
// Example 1:
// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9
// Example 2:

// Input: tokens = ["4","13","5","/","+"]
// Output: 6
// Explanation: (4 + (13 / 5)) = 6

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout << "Enter the size of tokens array: ";
    cin >> n;
    vector<string> tokens(n);
    cout << "Enter the elements of tokens array: ";
    for(int i = 0; i < n; i++){
        cin >> tokens[i];
    }
    stack<int> st;
    for(string token : tokens){
        if(token == "+" || token == "-" || token == "*" || token == "/"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if(token == "+"){
                st.push(a + b);
            }
            else if(token == "-"){
                st.push(a - b);
            }
            else if(token == "*"){
                st.push(a * b);
            }
            else if(token == "/"){
                st.push(a / b);
            }
        }
        else{
            st.push(stoi(token));
        }
    }
    cout << "Output: " << st.top() << endl;
    return 0;
}