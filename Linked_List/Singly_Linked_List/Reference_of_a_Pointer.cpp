#include<bits/stdc++.h>
using namespace std;

void update(int*& p){  //p হলো pointer এর reference
    int y = 20;
    p = &y;  //p এখন y এর address
    cout << "Inside function: " << p << endl;  //p এর মান এখন y এর address
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int* p = &x;  //p = x এর address

//  🧠 Reference কি?
// 👉 Reference = অন্য একটা variable-এর alias (nickname)
    int& ref = x;  //ref = x এর reference
    int*& refp = p;  //refp = p pointer এর reference

    cout << "Before function call: " << p << endl;  //p এর মান x এর address
    update(p);  //refp এর reference পাস করা হচ্ছে
    cout << "After function call: " << p << endl;  //p এর মান এখন y এর address, কারণ update ফাংশনে p এর reference (refp) ব্যবহার করে p কে y এর address এ আপডেট করা হয়েছে


// 👉 reference pointer হতে পারে না -> int&* p;  // ❌ invalid
// 👉 কিন্তু pointer-এর reference হতে পারে ✔️  -> int*& ref = p;
    return 0;
}