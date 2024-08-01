#include <bits/stdc++.h>
using namespace std;

//brute force approach
int findEquilibriumIndex1(int arr[], int n){
    for(int i = 0; i<n; i++){
        int leftSum = 0;
        for(int j = 0; j<i; j++){
            leftSum += arr[j];
        }
        int rightSum = 0;
        for(int j = i+1; j<n; j++){
            rightSum += arr[j];
        }
        if(leftSum == rightSum){
            return i;
        }
    }
    return -1;
}


//optimal approach

int findEquilibriumIndex2(int arr[], int n){
    int rightSum = 0;
    for(int i = 0; i<n; i++){
        rightSum += arr[i];
    }
    int leftSum = 0;
    for(int i = 0; i<n; i++){
        rightSum -= arr[i];
        if(leftSum == rightSum){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {2, 3, -1, 8, 4};
    int n = size(arr);
    int equilibriumidx1 = findEquilibriumIndex1(arr, n);
    cout <<"Brute force approach: "<< equilibriumidx1 << endl;

    int equilibriumidx2 = findEquilibriumIndex2(arr, n);
    cout <<"Optimal approach: " << equilibriumidx2 << endl;
    
}