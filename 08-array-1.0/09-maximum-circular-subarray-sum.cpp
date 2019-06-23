#include <iostream>
using namespace std;

int main() {
    int n, max_sum=0,current_sum=0, csum=0;
    cin>>n;
    int arr[n];
    // input number
    for(int i=0;i<n;i++){
        cin>>arr[i];
        csum += arr[i]; // calculate cumulative sum
        arr[i] = -1*arr[i]; // change sign of elemets of array
    }
    // calculate max-sum of reverse array using kadane's algo
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        if(current_sum<0){
            current_sum =0;
        }
        max_sum = max(current_sum,max_sum);
    }
    cout<<csum+max_sum<<endl; // adding largest -ve sub array sum which was subtracted from csum earlier
    return 0;
}

/*

Input: 
    8
    10 -3 -4 7 6 5 -4 -1
Output:
    23 => 16 - (-7) or 16 + 7
    // removed elemets are -3 -4 which is causing max sum in -ve array. so wa are adding 7.

we are removing those -ve elemets which are decreasing the sum.
-ve continous element should be removed i.e sub array having maximum sum in -ve array.
after removing 1 such subarray overall sum of continous array increases.
*/