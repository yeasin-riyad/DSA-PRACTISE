#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v={1,2,3,4,5};
    list<int> l(v.begin(),v.end());
    // l.clear(); // clear the list
    // cout<<l.size()<<endl; // size of the list after clearing
    // cout<<l.empty()<<endl; // check if the list is empty
    l.resize(5); // resize the list to 5 elements
    for(int val:l) cout<<val<<" "; // print the elements of the list
    return 0;
}