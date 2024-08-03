#include <bits/stdc++.h>
using namespace std;


//first approach
int calculateSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = arr[i] + sum;
    }
    return sum;
}


int main(){
    int arr[] = {1,2,1,1,5,1};
    int n = size(arr);

    // int ans1 = calculateSum(arr, n);
    // cout<<"sum of array is: "<<ans1;


    //second approach using accumulate function
    int sum = 0;
    int ans2 = accumulate(arr, arr+n, sum);
    cout<<"sum of array is: "<<ans2;

    return 0;
}