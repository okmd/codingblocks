#include<bits/stdc++.h>
using namespace std;
void print(priority_queue<int, vector<int>, greater<int> > pq){
    cout<<"Top "<<pq.size()<<" elements till now are: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
int main(){
    int current_size=0, k=3, n;
    priority_queue<int, vector<int>, greater<int> > pq;
    // 1 2 3 4 -1 5 9 10 -1 12 15 8 6 -1
    while(scanf("%d", &n)!=EOF){
        if(n==-1){
            // print k largest element till now.
            print(pq);
        }
        else if(current_size < k){ // heap is not equal to the required size of k.
            pq.push(n);
            current_size++;
        }else if(n > pq.top()){ // any number comes grater than the kth minimum till now. 
            pq.pop();
            pq.push(n);
        }
    }
    return 0;
}


/*
Question: Need to tell the largest k element till now in the running stream.
Running stream: Can't store all the numbers, numbers are coming.
For largest -> min heap of size k;
For smallest -> max heap of size k;
Worst Case insertion and deletion: O(Nlogk).
Reading running stream using EOF;
*/