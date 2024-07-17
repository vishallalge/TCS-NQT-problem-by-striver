#include <bits/stdc++.h>

using namespace std;

// first approach
int bySorting(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

// second approach
int byVariable(int* arr, int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    vector <int> arr = {5, 3, 2, 6, 4, 2};
    cout<<"largest number is: "<<bySorting(arr)<<endl;


    int arr1[] ={4, 3, 2, 1, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"largest element using max variable: "<<byVariable(arr1, n)<<endl;
    return 0;
}