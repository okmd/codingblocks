#include <bits/stdc++.h>
using namespace std;

void showdq(deque<int> dq) { 
    deque <int> :: iterator it; 
    for (it = dq.begin(); it != dq.end(); ++it) 
        cout<<*it<<" "; 
    cout<<endl; 
} 
  
int main(){
     
    deque <int> dq; 
    dq.push_back(10); 
    dq.push_front(20); 
    dq.push_back(30); 
    dq.push_front(15); 
    showdq(dq); 
  
    cout<<"\nSize:: "<<dq.size(); 
    cout<<"\nMax Size: "<<dq.max_size(); 
  
    cout<<"\nAt(2) : "<<dq.at(2); 
    cout<<"\nFront :"<<dq.front(); 
    cout<<"\nBack :"<<dq.back(); 
  
    cout << "\nPop front : "; 
    dq.pop_front(); 
    showdq(dq); 
  
    cout << "\nPop back : "; 
    dq.pop_back(); 
    showdq(dq); 
  
    return 0; 
} 

/*
Insertion and deletion can be done at both the end of the queue.
push_front(), pop_front()
push_back(), pop_back()
// space is not contiguous like vector.
// have complex implementation
// this will be helpfull for sliding window
It is available in the STL of C++.
*/