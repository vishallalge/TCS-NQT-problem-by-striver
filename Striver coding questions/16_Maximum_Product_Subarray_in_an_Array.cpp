#include <bits/stdc++.h>
using namespace std;

int max1(int a, int b){
    int ans;
    if(a>=b){
        ans = a;
    }
    else{
        ans = b;
    }
    return ans;
}


//brute force approach
int maxSubarrayProduct(int nums[], int n){
    int result = nums[0];
    for(int i=0;i<n-1;i++) {
        int p = nums[i];
        for(int j=i+1;j<n;j++) {
           result = max1(result,p);
           p *= nums[j];
        }
        result = max1(result,p);  //manages (n-1)th term
    }
    return result;
}

int main(){
    int arr[] = {1,2,3,4,5,0};
    return 0;
}