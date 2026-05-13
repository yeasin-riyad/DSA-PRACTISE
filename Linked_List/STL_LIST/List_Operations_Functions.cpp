#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l={10,20,30,40,50};
    l.remove(30); // remove all occurrences of an element from the list
    l.sort(); // sort the elements of the list
    l.sort(greater<int>()); // sort the elements of the list in descending order
    l.unique(); // remove consecutive duplicate elements from the list. only works on sorted lists
    l.reverse(); // reverse the order of the elements in the list


    return 0;
}