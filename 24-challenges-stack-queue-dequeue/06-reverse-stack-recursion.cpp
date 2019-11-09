#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s){
    if(!s.empty()){
        int t = s.top();
        s.pop();
        print(s);
        cout<<t<<endl;
    }
}

int main(){
    int n, v;
    stack<int> st, out;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>v;
        st.push(v);
    }

    print(st);

    return 0;
}

/*
Inp:
3
3
2
1
Out:
3
2
1


*/