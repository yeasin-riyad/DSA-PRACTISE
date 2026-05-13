#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
        int val;
        Node* next;
    };
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node a,b,c;
    
// initializing the values of the nodes and linking them together
    a.val=1;
    b.val=2;
    c.val=3;


    a.next=&b;
    b.next=&c;
    c.next=NULL;
    
    return 0;
}