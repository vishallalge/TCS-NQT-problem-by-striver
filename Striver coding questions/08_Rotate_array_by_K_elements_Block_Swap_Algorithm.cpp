#include <bits/stdc++.h>
using namespace std;

//printing the array
void printArr(vector<int> arr1, int n){
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
}


//brute force approach
void rotateArr1(int arr[], int n, int k){
    vector<int> arr1;
    for(int i = k; i<n; i++){
        arr1.push_back(arr[i]);
    }
    for(int i = 0; i<k; i++){
        arr1.push_back(arr[i]);
    }
    printArr(arr1, n);
}


//optimal approach
void swapArr(int arr[], int a, int b, int k){
    for(int i = 0; i<k; i++){
        int temp = arr[a+i];
        arr[a+i] = arr[b+i];
        arr[b+i] = temp;
    }
}

void rotateArr2(int arr[], int n, int k){
    
    if(k == 0 || k == n){
        return;
    }

    // If first part and second part are of same size
    if(k == n-k){
        swapArr(arr, 0, n-k, k);
        return;
    }

    // If first part of array is of smaller size
    else if(k < n-k){
        swapArr(arr, 0, n-k, k);
        rotateArr2(arr, n-k, k);    // second part of array is taken now
    }

    // If second part of array is of smaller size
    else{
        swapArr(arr, 0, k, n-k);
        rotateArr2(arr + n-k, k, 2*k-n);
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = size(arr);
    int k = 2;

    // rotateArr1(arr, n, k);        // first approach 

    //second approach
    rotateArr2(arr, n, k);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

