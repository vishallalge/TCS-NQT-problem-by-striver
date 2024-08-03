#include <bits/stdc++.h>
using namespace std;

//brute force approach
bool isSubset1(int arr1[], int m, int arr2[], int n){
    if(m>n) return false;
    for(int i = 0; i<m; i++){
        bool present = false;
        for(int j = 0; j < n; j++){
            if(arr2[j] == arr1[i]){
                present = true;
                break;
            }
        }
        if(present == false) return false;
    }
    return true;
}




//optimal approach
bool binarySerch(int arr[], int n , int k){
    int s = 0;
    int e = n-1;    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == k){
            return true;
        }
        else if(arr[mid]<k){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    return false;
}

bool isSubset2(int arr1[], int m, int arr2[], int n){
    sort(arr2, arr2+n);
    if(m>n) return false;
    for(int i = 0; i<m; i++){
        bool present =  binarySerch(arr2, n, arr1[i]);
        if(present == false) return false;
    }
    return true;
}


//using hashmap
bool isSubset3(int arr1[], int m, int arr2[], int n){
    if(m>n) return false;
    unordered_map<int, bool> mp;
    for(int i = 0; i<n; i++){
        mp[arr2[i]] = true;
    }
    for(int i = 0; i<m; i++){
        if(mp.count(arr1[i])==0){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
    int m = size(arr1);
    int n = size(arr2);

    int ans1 = isSubset2(arr1, m, arr2, n);
    if(ans1){
        cout<<"arr1 is subset of arr2"<<endl;
    }
    else{
        cout<<"arr1 is not subset of arr2"<<endl;
    }


    int ans2 = isSubset2(arr1, m, arr2, n);
    if(ans2){
        cout<<"arr1 is subset of arr2"<<endl;
    }
    else{
        cout<<"arr1 is not subset of arr2"<<endl;
    }


    int ans3 = isSubset3(arr1, m, arr2, n);
    if(ans3){
        cout<<"arr1 is subset of arr2"<<endl;
    }
    else{
        cout<<"arr1 is not subset of arr2"<<endl;
    }

}