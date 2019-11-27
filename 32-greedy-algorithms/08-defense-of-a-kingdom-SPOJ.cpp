#include<bits/stdc++.h>
using namespace std;

int point_x[40000+10], point_y[40000+10];
int main(){
    int t,w,h,n,x,y,dx,dy;
    cin>>t;
    while(t--){
        cin>>w>>h>>n;
        for(int i=0;i<n;i++){
            cin>>point_x[i]>>point_y[i];
        }
        sort(point_x, point_x+n); // sort x co-ordinate
        sort(point_y, point_y+n); // sort y co-ordinates
        dx = point_x[0];
        dy = point_y[0];
        for(int i=1; i<n; i++){
            dx = max(dx, point_x[i] - point_x[i-1]);
            dy = max(dy, point_y[i] - point_y[i-1]);
        }
        dx = max(dx, w+1 - point_x[n-1]);
        dy = max(dy, h+1 - point_y[n-1]);
        cout<<"Max area rectangle: "<<(dx-1)*(dy-1)<<endl;;
    }
    return 0;
}
/*
1hr33min
Question:http://www.spoj.com/problems/DEFKIN/ 

*/