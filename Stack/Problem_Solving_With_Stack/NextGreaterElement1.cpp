//Next Greater Element I
// You are given two distinct 0-indexed integer arrays nums1 and nums2, 
//where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that 
//nums1[i] == nums2[j] and determine the next greater element of nums2[j] 
//in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next 
//greater element as described above.
// Example 1:

// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]

//Use Monotonic Stack
//Monotonic Stack is a stack that maintains its elements in a 
//specific order (either increasing or decreasing).
//For Example, in this problem we will maintain a decreasing stack, 
//which means that the elements in the stack will be in decreasing order from top to bottom.

// Important Pattern
// Next Greater Element
// Usually:
// decreasing stack
// Next Smaller Element
// Usually:
// increasing stack

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n, m;
    cout << "Enter the size of nums1: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter the elements of nums1: ";
    for(int i = 0; i < n; i++){
        cin >> nums1[i];
    }
    cout << "Enter the size of nums2: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter the elements of nums2: ";
    for(int i = 0; i < m; i++){
        cin >> nums2[i];
    }

    vector<int> res;

    // Time Complexity  O(n*n);
// for(int i=0;i<n;i++){
//     int current=nums1[i];
//     int findGreater=-1;
//     for(int j=0;j<m;j++){
//         if(nums2[j]==current){
//             for(int k=j+1;k<m;k++){
//                 if(nums2[k]>current){
//                     findGreater=nums2[k];
//                     break;
//                 }

//             }
//             res[i]=findGreater;
//             break;
//         }

//     }

// }

stack<int> stk;
unordered_map<int,int> mp;

for(int num:nums2){
    while(!stk.empty() && stk.top()<num){
        mp[stk.top()]=num;
        stk.pop();
    }
    stk.push(num);
}

while(!stk.empty()){
    mp[stk.top()]=-1;
    stk.pop();
}



for(int val:nums1){
   res.push_back(mp[val])  ;
}
for(int i=0;i<n;i++){
    cout<<res[i]<<" ";
}
    

    return 0;
}