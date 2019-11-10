#include <bits/stdc++.h> 
using namespace std; 
  
class Queue{ 
    stack<int> s1, s2; 
    public:
        void enQueue(int x){
            while (!s1.empty()) { 
                s2.push(s1.top()); 
                s1.pop(); 
            }  
            s1.push(x); 
            while (!s2.empty()) { 
                s1.push(s2.top()); 
                s2.pop(); 
            } 
        }
        int deQueue(){ 
            if (s1.empty()) { 
                cout << "Q is Empty"; 
                exit(0); 
            } 
            int x = s1.top(); 
            s1.pop(); 
            return x; 
        } 
};

int main(){
    Queue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        q.enQueue(i);
    }
    for(int i=0; i<n; i++){
        cout<<q.deQueue()<<" ";
    }

    return 0;
}
/*
s1 for pop
s2 for push
*/