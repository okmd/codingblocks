#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int height[n], left_max[n], right_max[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
        left_max[i] = (i>0)? max(left_max[i-1],height[i]): height[i];
    }
    for(int i=n-1;i>=0;i--){
        right_max[i] = (i<n-1)? max(right_max[i+1],height[i]): height[i];
    }
    // output array
    cout<<"Entered Array: ";
    for(int i=0;i<n;i++){
        cout<<height[i]<<",";
    }
    cout<<endl;
    // output left max array
    cout<<"Left Max Array: ";
    for(int i=0;i<n;i++){
        cout<<left_max[i]<<",";
    }
    cout<<endl;
    //output right max array
    cout<<"Right Max Array: ";
    for(int i=0;i<n;i++){
        cout<<right_max[i]<<",";
    }
    cout<<endl;
    // calculate water
    int water=0;
    for(int i=0;i<n;i++){
        water += min(left_max[i], right_max[i]) -height[i];
    }
    cout<<"Water Accumulated: "<<water<<endl;
    return 0;
}

/*

Input: 
10
0 2 1 3 0 1 2 1 2 1
Output:
5

*/
