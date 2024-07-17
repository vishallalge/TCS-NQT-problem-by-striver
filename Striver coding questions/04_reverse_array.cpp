#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//first approach
void reverseArr1(int arr[], int n){
    int ans[n];
    for(int i = n-1; i>=0; i--){
        ans[n-i-1] = arr[i];
    }
    printArr(ans, n);
}

//second approach
void reverseArr2(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    printArr(arr, n);
}

//third approach
void reverseArr3(int arr[], int s, int e){
    if(s<e){
        swap(arr[s], arr[e]);
        reverseArr3(arr, s+1, e-1);  
    }
}

//forth approach
void reverseArr4(int arr[], int n){
    reverse(arr, arr+n);
    printArr(arr, n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = size(arr);

    //first approach
    // reverseArr1(arr, n);

    //second approach
    // reverseArr2(arr, n);

    //third approach
    // reverseArr3(arr, 0, n-1);
    // printArr(arr, n);

    //forth approach
    reverseArr4(arr, n);

    return 0;
}