# 🚀 Stack Complete Interview Guide

> Software Engineering Interview Preparation Notes  
> Data Structure | DSA | Problem Solving

---

# 📚 Table of Contents

- What is Stack?
- What Type of Data Structure is Stack?
- LIFO Principle
- Real Life Examples
- Stack Operations
- Stack Visualization
- Stack Using Array
- Stack Using Linked List
- Time Complexity
- Applications of Stack
- Function Call Stack
- Recursion & Stack
- Important Interview Problems
- Stack vs Queue
- LeetCode Problems
- Interview Composition
- Final Interview Tips

---

# 🌟 What is Stack?

Stack হলো একটি Linear Data Structure যেখানে data insertion এবং deletion শুধুমাত্র এক পাশ থেকে করা হয়।

সাধারণত সেই পাশকে বলা হয়:

```txt
TOP
```

---

# 🧠 Stack Follows LIFO Principle

# LIFO = Last In First Out

মানে:

```txt
সর্বশেষে যে element ঢুকবে
সেটাই সবার আগে বের হবে
```

---

# 🎯 Real Life Example

ভাবো তুমি plate stack করছো 🍽️

```txt
Plate 1
Plate 2
Plate 3
```

এখন remove করলে:

```txt
প্রথমে Plate 3 বের হবে
```

কারণ এটা সবচেয়ে উপরে আছে।

এটাই Stack 😄

---

# 🧱 Stack Visualization

```txt
TOP
 ↓
| 30 |
| 20 |
| 10 |
-----
```

---

# 📌 What Type of Data Structure is Stack?

Stack হলো:

✅ Linear Data Structure

কারণ data sequentially arrange থাকে।

---

# 🧠 Characteristics of Stack

| Feature | Description |
|---|---|
| Linear | Sequential data |
| LIFO | Last In First Out |
| One End Operation | Insert/Delete at top |
| Dynamic/Static | Both possible |

---

# 🔥 Main Stack Operations

| Operation | Description |
|---|---|
| push() | Element insert |
| pop() | Element remove |
| top() / peek() | Top element দেখা |
| empty() | Stack empty কিনা |
| size() | Stack size |

---

# ✅ Push Operation

নতুন element stack এর top এ add করা হয়।

---

# Example

```txt
Before:

| 20 |
| 10 |

After push(30):

| 30 |
| 20 |
| 10 |
```

---

# ✅ Pop Operation

Top element remove করা হয়।

---

# Example

```txt
Before:

| 30 |
| 20 |
| 10 |

After pop():

| 20 |
| 10 |
```

---

# 🧠 Stack Implementation Using Array

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    return 0;
}
```

---

# 🔥 Output

```txt
30
20
```

---

# 🧠 Stack Using Linked List

Linked List দিয়েও stack implement করা যায়।

---

# Why?

কারণ:

```txt
Insert/Delete at head = O(1)
```

---

# Visualization

```txt
TOP
 ↓
30 -> 20 -> 10 -> NULL
```

---

# ⏱️ Time Complexity

| Operation | Complexity |
|---|---|
| Push | O(1) |
| Pop | O(1) |
| Top | O(1) |
| Search | O(N) |

---

# 🌍 Real Life Usage of Stack

---

# 🌐 1. Browser Back Button

```txt
Google
Facebook
YouTube
```

Back button চাপলে:

```txt
সর্বশেষ page আগে বের হয়
```

👉 Stack used internally

---

# ↩️ 2. Undo Operation

Used In:

- VS Code
- Photoshop
- MS Word

---

# Example

```txt
Write A
Write B
Write C
```

Undo করলে:

```txt
C remove হবে আগে
```

👉 Stack

---

# 🧠 3. Function Call Stack

Programming language internally function call manage করতে stack use করে।

---

# Example

```cpp
main()
hello()
world()
```

শেষে যে function call হয়েছে,
সেটা আগে return করবে।

---

# 🎯 Visualization

```txt
TOP
 ↓
world()
hello()
main()
```

---

# 🔥 4. Recursion

Recursion internally stack use করে।

---

# Example

```cpp
factorial(5)
```

Call Stack:

```txt
factorial(5)
factorial(4)
factorial(3)
factorial(2)
factorial(1)
```

---

# 🧮 5. Expression Evaluation

Calculator:

```txt
(2 + 3) * 5
```

এখানে parentheses handling এ stack use হয়।

---

# 🔥 6. Syntax Parsing

Compiler stack ব্যবহার করে:

- brackets matching
- syntax checking

---

# Example

```cpp
{
   ()
}
```

---

# 🎮 7. Game Development

Used In:

- game states
- move history
- undo system

---

# 🧠 Stack Memory vs Heap Memory

| Stack Memory | Heap Memory |
|---|---|
| Automatic | Manual |
| Faster | Slower |
| Small | Large |
| Function Calls | Dynamic Memory |

---

# ⚡ Important Stack Interview Problems

---

# 1️⃣ Valid Parentheses ⭐⭐⭐⭐⭐

Most famous stack problem.

---

# Logic

```txt
Opening bracket push
Closing bracket pop
```

---

# Example

```txt
()
[] 
{}
```

---

# 2️⃣ Next Greater Element ⭐⭐⭐⭐⭐

Uses:

```txt
Monotonic Stack
```

---

# 3️⃣ Min Stack ⭐⭐⭐⭐

Stack with minimum tracking।

---

# 4️⃣ Evaluate Postfix Expression ⭐⭐⭐⭐

Expression evaluation using stack।

---

# 5️⃣ Daily Temperatures ⭐⭐⭐⭐⭐

Very famous interview problem।

---

# ⚔️ Stack vs Queue

| Feature | Stack | Queue |
|---|---|---|
| Principle | LIFO | FIFO |
| Insert/Delete | Same End | Different Ends |
| Real Life | Plates | Line/Queue |

---

# 🔗 Important LeetCode Problems

- Valid Parentheses
- Min Stack
- Daily Temperatures
- Next Greater Element
- Evaluate Reverse Polish Notation

---

# 🌟 Composition For Interview Preparation

# ✍️ Stack Composition (Bangla)

Stack হলো একটি গুরুত্বপূর্ণ Linear Data Structure যা LIFO (Last In First Out) principle অনুসরণ করে। এর অর্থ হলো সর্বশেষে যে element insert করা হয়, সেটাই সবার আগে remove হয়।

বাস্তব জীবনে Stack এর অনেক ব্যবহার রয়েছে। যেমন browser এর back button, undo operation, function call management, recursion ইত্যাদি stack ব্যবহার করে কাজ করে।

Programming language এর function call internally stack এর মাধ্যমে manage করা হয়। যখন একটি function call হয়, তখন সেটি stack এ push হয় এবং function execution শেষ হলে stack থেকে pop হয়।

Stack এর প্রধান operations হলো push, pop, top, empty এবং size। Push operation এর মাধ্যমে element insert করা হয় এবং pop operation এর মাধ্যমে top element remove করা হয়।

Software engineering interview তে stack খুব গুরুত্বপূর্ণ একটি topic কারণ এটি problem solving skill এবং data structure understanding improve করে। বিশেষ করে parentheses matching, next greater element, recursion এবং expression evaluation problems এ stack ব্যবহৃত হয়।

Stack সাধারণত array অথবা linked list ব্যবহার করে implement করা যায়। এর insertion এবং deletion operation এর time complexity হলো O(1)।

বর্তমান software development, compiler design, browser history management এবং operating system এ stack ব্যাপকভাবে ব্যবহৃত হচ্ছে।

---

# 🚀 Final Interview Tips

✅ Stack visualize করতে শিখো

✅ LIFO concept clear রাখো

✅ Push/Pop mentally trace করো

✅ Recursion এর সাথে stack connection বুঝো

✅ Monotonic Stack problems practice করো

---

# ❤️ Final Note

Stack mastery তোমার:

- Problem Solving
- Recursion Understanding
- Interview Confidence
- Algorithmic Thinking

অনেক improve করবে 🔥