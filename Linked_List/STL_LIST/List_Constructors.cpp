#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l(10,3);
    cout<<l.size()<<endl;
    // for(auto it=l.begin();it!=l.end();it++){
    //     cout<<*it<<endl;
    // }

    for(int val:l) cout<<val<<" ";
    return 0;
}