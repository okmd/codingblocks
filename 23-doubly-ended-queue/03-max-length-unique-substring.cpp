#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[] = "babbb";
    int n = strlen(a);
    int current_len = 1;
    int max_len = 1;
    int visited[256];
    // initilize -1 to represent not visited
    for(int i=0;i<256; i++)
        visited[i]=-1;
    // first char
    visited[a[0]]=1;
    //remaining
    for(int i=1;i<n;i++){
        int last_occurance = visited[a[i]];
        // expansion
        if(last_occurance==-1 or i-current_len>last_occurance)
            current_len++;
        // expansion+contraction
        else{
            max_len = max(max_len, current_len);
            current_len = i-last_occurance;
        }
        //mark visited
        visited[a[i]] = i;
    }

    max_len = max(max_len, current_len);
    cout<<"Max Length: "<<max_len;

    return 0;
}