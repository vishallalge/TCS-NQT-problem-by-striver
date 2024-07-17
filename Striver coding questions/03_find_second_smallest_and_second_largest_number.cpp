#include<bits/stdc++.h>
using namespace std;

// Brute force approach
void getElements(int arr[], int n){
    int ss = -1;
    int sl = -1;
    if(n<2){
        cout<<"your array is too small: "<<endl;
        cout<<"Second smallest element: "<<ss<<" and Second largest element: "<<sl<<endl;
    }
    sort(arr, arr+n);
    ss = arr[1];
    sl = arr[n-2];
    cout<<"Second smallest element: "<<ss<<" and Second largest element: "<<sl<<endl;
}


//Optimal approach 
void getElements2(int arr[], int n){
    int s, ss, l, sl;
    s = ss = INT_MAX;
    l = sl = INT_MIN;
    if(n<2){
        cout<<"your array is too small: "<<endl;
        cout<<"Second smallest element: "<<ss<<" and Second largest element: "<<sl<<endl;
    }
    for(int j = 0; j<n; j++){
        s = min(s, arr[j]);
        l = max(l, arr[j]);
    } 
    for(int i = 0; i<n; i++){
        if(ss>arr[i] && s!=arr[i]){
            ss = arr[i];
        }
        if(sl < arr[i] && l != arr[i]){
            sl = arr[i];
        }
    }
    cout<<"Second smallest element: "<<ss<<" and Second largest element: "<<sl<<endl;

}

//best approach

int  secondSmallest(int arr[], int n){
    int s = INT_MAX, ss = INT_MAX;
    if(n<2){
        return -1;
    }
    for(int i = 0; i<n; i++){
        if(s>arr[i]){
            ss = s;
            s = arr[i];
        }
        else if(ss>arr[i] && s!=arr[i]){
            ss = arr[i];
        }
    }
    return ss;
}

int secondLargest(int arr[], int n){
    int l = INT_MIN, sl = INT_MIN;
    if(n<2){
        return -1;
    }
    for(int i = 0; i<n; i++){
        if(l<arr[i]){
            sl = l;
            l = arr[i];
        }
        else if(sl<arr[i] && l!=arr[i]){
            sl = arr[i];
        }
    }
    return sl;

}

int main(){
    int arr[] = {4, 3, 2, 7, 9, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // getElements(arr, n);     // brute force approach
    // getElements2(arr, n);    // optimal approach
    int ss = secondSmallest(arr, n);     // best approach
    int sl = secondLargest(arr, n);
    cout<<"Second smallest element: "<<ss<<" and Second largest element: "<<sl<<endl;
    return 0;
}