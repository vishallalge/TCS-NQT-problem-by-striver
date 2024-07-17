#include<bits/stdc++.h>

using namespace std;
 

// first approach 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[0];
}

// second approach
int usingMinVariable(int *arr, int n){
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main() {
    // first approach
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The smallest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The smallest element in the array is: "<<sortArr(arr2)<<endl;
   

    // second approach
    int arr[] ={4, 3, 2, 1, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Smallest element using min variable: "<<usingMinVariable(arr, n)<<endl;
    return 0;
}

