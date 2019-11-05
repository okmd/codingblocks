#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;
    // assuming atleast 2 element queue
    int n,v,f,g,h;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>v;
        q.push(v);
    }
    f = q.front();
    while(q.size()!=1){
        g = q.front();
        q.pop();
        h = q.front();
        if(h>g){
            cout<<h<<" ";
        }else{
            cout<<-1<<" ";
        }
    }
    // last to first compare
    if(h<f)
        cout<<f;
    else
        cout<<-1;
        

	return 0;
}

/*
Inp:
5
5 5 5 5 5
Out:
-1 -1 -1 -1 -1
Inp:
3
1 2 3
Out:
2 3 -1

*/