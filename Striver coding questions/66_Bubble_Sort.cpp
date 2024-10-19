#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = n-1; i>0; i--){
        int didSwap = 0;
        for(int j = 0; j <i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
                break;
        }
        // cout<<"run\n";
    }
}


int main(){
    int n = 6;
    int arr[n] = {6, 5, 4, 3, 2, 1};
    bubbleSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}