#include <bits/stdc++.h>
using namespace std;

void findMedian(int arr[], int n){
    int median = 0;
    sort(arr, arr+n);
    if(n % 2 == 0){
        median = arr[(n/2)-1] + arr[n/2] / 2;
    }
    else{
        median = arr[n/2];
    }
    cout<<"Median: "<<median;
}


int main(){
    int arr[] = {5, 4, 3, 2, 1, 8};
    int n = size(arr);
    findMedian(arr, n);
    return 0;
}