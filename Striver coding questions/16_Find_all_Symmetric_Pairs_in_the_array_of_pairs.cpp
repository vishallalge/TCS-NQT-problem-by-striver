#include <bits/stdc++.h>
using namespace std;

// brute force approach
void findSymmetricPair1(int arr[][2], int n){
    cout<<"Symmetric pair using brute force: "<<endl;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j][0]==arr[i][1]&& arr[i][0]==arr[j][1]){
                cout<<"("<<arr[i][1]<<", "<<arr[i][0]<<") ";
                break;
            }
        }
    }
}

//optimal approach

void findSymmetricPair2(int arr[][2], int n){
    cout<<endl<<"Symmetric pair using optimal solution: "<<endl;
    unordered_map <int, int> mp;
    for(int i = 0; i<n; i++){
        int first = arr[i][0];
        int second = arr[i][1];
        if(mp.find(second) != mp.end() && mp[second] == first){
            cout<<"("<<arr[i][1]<<", "<<arr[i][0]<<") ";
        }
        else{
            mp[first] = second;
        }
    }
}
int main(){
    int n=5;
    int arr[n][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    findSymmetricPair1(arr, n);
    findSymmetricPair2(arr, n);
    return 0;
}