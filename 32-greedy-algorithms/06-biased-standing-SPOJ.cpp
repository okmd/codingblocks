#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, temp, sum, arr[100]={0};
    char name[10];
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>name;
            cin>>temp;
            arr[temp]++; // increment array freq
        }
        int pos = 1; // as rank start from 1
        for(int i=1; i<=n; i++){
            while(arr[i]){
                sum += abs(pos-i); // abs is difference
                arr[i]--;
                pos++;
            }
        }
        cout<<"Badness: "<<sum<<endl;
    }
    return 0;
}

/*
https://www.spoj.com/problems/BAISED/
    -> Just sort the array and find the difference - O(n).
    -> Take frequence array - O(n)
Input:
2

7
noobz 1
llamas 2
Winn3rz 2
5thwheel 1
NotoricCoders 5
StrangeCase 7
WhoKnows 7

3
ThreeHeadedMonkey 1
MoscowSUx13 1
NeedForSuccess 1

Output:
5
3
*/