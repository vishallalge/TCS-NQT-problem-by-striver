#include <bits/stdc++.h>
using namespace std;

//brute force approach 
void replaceByItsRank1(int arr[], int n){
    for(int i = 0; i<n; i++){
        set <int> s;
        for(int j = 0; j<n; j++){
            if(arr[j]<arr[i]){
                s.insert(arr[j]);
            }
        }
        cout<<s.size()+1<<" ";
    }
    cout<<endl;
}

//optimal approach
void replaceByItsRank2(int arr[], int n){
    int brr[n];
    map<int, int> mp;
    for(int i = 0; i<n; i++){
        brr[i] = arr[i];
    }
    sort(brr, brr+n);
    int temp = 1;
    for(int i = 0; i<n; i++){
        if(mp[brr[i]]==0){
            mp[brr[i]] = temp;
            temp++;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<mp[arr[i]]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {20, 15, 26, 15, 98, 6, 20};
    int n = size(arr);
    replaceByItsRank1(arr, n);
    replaceByItsRank2(arr, n);
    return 0;
}



// leetcode problem link: https://leetcode.com/problems/rank-transform-of-an-array/description/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {   
        map<int, vector<int>> mp;
        int temp = 1;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]].push_back(i);
        }
        vector<int> v;
        for(auto it = mp.begin(); it!=mp.end();it++){
            v = it->second;
            int idx;
            for(int i = 0; i<v.size();i++){
                arr[v[i]] = temp;
            }
            temp++;
        }
        return arr;
    }
};