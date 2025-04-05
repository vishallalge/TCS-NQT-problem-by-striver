#include<bits/stdc++.h>
using namespace std;

int findCardSum(int arr[], int n, int k){
    if(k>n){
        return -1;
    }

    int lsum = 0 , rsum = 0;
    int maxSum = 0;

    for(int i = 0; i<k; i++){
        lsum += arr[i];
    }
    maxSum = lsum;

    int j = n-1;
    for(int i = k-1; i>=0; i--){
        lsum -= arr[i];
        rsum += arr[j];
        j--;
        maxSum = max(maxSum, (lsum+rsum));
    }
    return maxSum;

}

int main(){
    int n;
    cin>>n;

    if(n<=0){
        return -1;
    }
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }

    int k;
    cin>>k;

    if(k<1){
        return -1;
    }


    cout<<findCardSum(arr, n, k);

    return 0;
}