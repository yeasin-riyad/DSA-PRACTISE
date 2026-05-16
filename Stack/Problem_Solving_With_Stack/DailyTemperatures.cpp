//Daily Temperatures
// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to 
// wait after the ith day to get a warmer temperature. If there is no future day
//  for which this is possible, keep answer[i] == 0 instead.
// Example 1:

// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout << "Enter the size of temperatures array: ";
    cin >> n;
    vector<int> temperatures(n);
    cout << "Enter the elements of temperatures array: ";
    for(int i = 0; i < n; i++){
        cin >> temperatures[i];
    }
    vector<int> answer(n, 0);
    stack<int> st; // stack will store the indices of the temperatures array
    for(int i = 0; i < n; i++){
        while(!st.empty() && temperatures[i] > temperatures[st.top()]){
            int idx = st.top();
            st.pop();
            answer[idx] = i - idx;
        }
        st.push(i);
    }
    cout << "Output: ";
    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }
    return 0;
}