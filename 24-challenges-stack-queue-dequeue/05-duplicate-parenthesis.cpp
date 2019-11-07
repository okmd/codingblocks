#include <bits/stdc++.h>
using namespace std;

bool haveDuplicate(char arr[]){
    stack<char> s;
    int i=0;
    while(arr[i]!='\0'){
        char ch = arr[i++];
        if (ch == ')'){ 
            char top = s.top(); 
            s.pop(); 
            int countIn = 0; 
            while(top != '('){ 
                countIn++; 
                top = s.top(); 
                s.pop(); 
            } 
            if(countIn < 1){ 
                return true; 
            } 
        }else{
            s.push(ch);
        }
    }
    return false; 

}

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[1000];
        cin>>s;
        if(haveDuplicate(s))
            cout<<"Duplicates\n";
        else
            cout<<"Not Duplicates\n";
    }
    return 0;
}