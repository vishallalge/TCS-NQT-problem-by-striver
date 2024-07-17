#include <bits/stdc++.h>
using namespace std;

void rearrangeArr(int arr[], int n){
    sort(arr, arr+n);
    for(int i = 0; i<n/2; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = n-1; i >= n/2; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {4, 2, 8, 6, 15, 5, 9, 20};
    int n = size(arr);
    rearrangeArr(arr, n);
}