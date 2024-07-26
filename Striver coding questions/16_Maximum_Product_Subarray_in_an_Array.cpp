#include <bits/stdc++.h>
using namespace std;

// int max1(int a, int b){
//     int ans;
//     if(a>=b){
//         ans = a;
//     }
//     else{
//         ans = b;
//     }
//     return ans;
// }

//brute force approach
int maxSubarrayProduct1(int arr[], int n){
    int result = INT_MIN;
    for(int i = 0; i<n; i++){
        int p = arr[i];
        for(int j = i+1; j<n; j++){
            result = max(result, p);
            p *= arr[j];
        }
        result = max(result, p);
    }
    return result;
}

//optimal approach 
int maxSubarrayProduct2(int arr[], int n){
    int ans = INT_MIN;
    int pre = 1, suff = 1;
    for(int i = 0; i<n; i++){
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n-i-1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,5,0};
    int n = size(arr);
    cout<<"1. Product of subarray is: "<<maxSubarrayProduct1(arr, n)<<endl;
    cout<<"2. Product of subarray is: "<<maxSubarrayProduct2(arr, n)<<endl;
    return 0;
}