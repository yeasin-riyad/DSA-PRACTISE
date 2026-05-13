#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l={10,20,30,40,50};
    list<int> l2;
    // l2.assign(l.begin(),l.end()); // assign the elements of l to l2
    l2=l; // copy assignment operator
    l2.push_back(60); // add an element at the end of the list
    l2.push_front(5); // add an element at the beginning of the list
    l2.pop_back(); // remove the last element of the list
    l2.pop_front(); // remove the first element of the list
    l2.insert(next(l2.begin(),2),25); // insert an element at a specific position
    l2.erase(next(l2.begin(),3)); // remove an element at a specific position
    l2.insert(next(l2.begin(),4),l.begin(),l.end()); // insert a range of elements at a specific position
    l2.erase(next(l2.begin(),5),next(l2.begin(),8)); // remove a range of elements at a specific position
    replace(l2.begin(),l2.end(),30,35); // replace all occurrences of an element with another element
    find(l2.begin(),l2.end(),25)!=l2.end() ? cout<<"Element found"<<endl : cout<<"Element not found"<<endl; // find an element in the list
    
    return 0;
}