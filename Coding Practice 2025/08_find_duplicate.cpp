#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n){
    unordered_set<int> mySet;

    if(n==0){
        return -1;
    }
    
    for(int i = 0; i<n; i++){
        if(arr[i]<INT_MIN || arr[i]>INT_MAX){
            return -1;
        }
        if(mySet.count(arr[i])){
            return arr[i];
        }
        mySet.insert(arr[i]);
    }
    return -1;
}

int main(){

    return 0;
}