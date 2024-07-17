#include <bits/stdc++.h>
using namespace std;

void averageArr(int arr[], int n){
    int ans = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    ans = sum/n;
    cout<<"Average: "<<ans;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = size(arr);
    averageArr(arr, n);

    return 0;
}