#include <bits/stdc++.h>
using namespace std;

//brute force approach
void searchElement1(int arr[], int n, int k){
    for(int i = 0; i<n; i++){
        if(arr[i] == k){
            cout<<"Element is present on index: "<<i;
        }
    }
    cout<<endl;
}


//optimal approach 
void searchElement2(int arr[], int n, int k){
    int l = 0;
    int h = n-1;
    int ans = -1;
    sort(arr, arr+n);
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]<k){
            l = mid+1;
        }
        else if(arr[mid]>k){
            h = mid -1;
        }
        else{
            ans = mid;
            break;
        }
    }
    cout<<"Element is present on index: "<<ans;
    cout<<endl;
}


int main(){
    int arr[] = {6, 7, 9, 5, 3, 10};
	int k = 10;
    int n = size(arr);
    searchElement1(arr, n, k);
    searchElement2(arr, n, k);

}