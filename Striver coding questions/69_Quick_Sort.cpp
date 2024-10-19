#include <bits/stdc++.h>
using namespace std;

int partitionIndex(int arr[], int low, int high){
    int i = low; 
    int j = high;
    int pivote = arr[low];

    while(i<j){

        while(arr[i]<=pivote && i < high){
            i++;
        }
        while(arr[j]>pivote && j > low){
            j--;
        }

        if(i<j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int index = partitionIndex(arr, low, high);
        quickSort(arr, low, index-1);
        quickSort(arr, index+1, high);
    }
}

int main(){
    int n = 6;
    int arr[] = {6, 5, 4, 3, 2, 1};
    quickSort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}