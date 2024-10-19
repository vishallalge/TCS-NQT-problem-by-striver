#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){
    int n = 6;
    int arr[n] = {6, 5, 4, 3, 2, 1};
    insertionSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}