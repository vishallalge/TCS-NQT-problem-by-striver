#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//approach 1 --> Right to left
void rotateByKElement1(int arr[], int n, int k){
    //base case
    if(n == 0) return;
    k = k%n;
    if(k>n) return;

    // adding k elements to temp array
    int temp[k];
    for(int i = n-k; i<n; i++){
        temp[i-n+k] = arr[i];
    }

    //shifting n-k element to its right position
    for(int i = n-k-1; i>=0; i--){
        arr[i+k] = arr[i];
    }

    //geting k elements and adding it to the start of main array
    for(int i = 0; i<k; i++){
        arr[i] = temp[i];
    }
    printArr(arr, n);
}


//approach 2 --> left to right
void rotateByKElement2(int arr[], int n, int k){
    //base case
    if(n == 0) return;
    k = k%n;
    if(k>n) return;

    // adding k elements to temp array
    int temp[k];
    for(int i = 0; i<k; i++){
        temp[i] = arr[i];
    }

    //shifting n-k element to its right position
    for(int i = k; i<n; i++){
        arr[i-k] = arr[i];
    }

    //geting k elements and adding it to the start of main array
    for(int i = 0; i<k; i++){
        arr[n-k+i] = temp[i];
    }
    printArr(arr, n);

}


//approach 3 --> right to left
void reverseArr(int arr[], int s, int e){
    while(s<=e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}


void rotateByKElement3(int arr[], int n, int k){
    //reversing whole array
    reverseArr(arr, 0, n-1);

    //reversing only k elements
    reverseArr(arr, 0, k-1);

    //reversing remening elements
    reverseArr(arr, k, n-1);

    printArr(arr, n);
}


//approach 4 --> left to right
void rotateByKElement4(int arr[], int n, int k){
    //reversing whole array
    reverseArr(arr, 0, n-1);

    //reversing only k elements
    reverseArr(arr, 0, n-k-1);

    //reversing remening elements
    reverseArr(arr, n-k, n-1);

    printArr(arr, n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = size(arr);
    int k = 2;
    // rotateByKElement1(arr, n, k);
    // rotateByKElement2(arr, n, k);
    // rotateByKElement3(arr, n, k);
    rotateByKElement4(arr, n, k);

}