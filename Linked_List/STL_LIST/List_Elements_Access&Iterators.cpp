#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l={10,3,4,5,10,20,30,40,50};
    cout<<l.front()<<endl; // access the first element of the list
    cout<<l.back()<<endl; // access the last element of the list
    cout<<*next(l.begin(), 2)<<endl; // access the third element of the list using an iterator
    cout<<*l.begin()<<endl; // access the first element of the list using an iterator
    cout<<*prev(l.end(), 1)<<endl; // access the last element of the list using an iterator

    return 0;
}