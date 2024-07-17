#include <bits/stdc++.h>
using namespace std;

//brut force approach
int removeDuplicate1(int arr[], int n){
    set<int> set;
    for(int i = 0; i<n; i++){
        set.insert(arr[i]);
    }
    int  k = set.size();
    int j = 0;
    for(int x : set){
        arr[j++] = x;
    }
    return k;
}

// optimal approach
int removeDuplicate2(int arr[], int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 4, 5};
    int n = size(arr);
    // int k = removeDuplicate1(arr, n);
    int k = removeDuplicate2(arr, n);


    cout << "Array after removing duplicate elements: " << endl;
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}