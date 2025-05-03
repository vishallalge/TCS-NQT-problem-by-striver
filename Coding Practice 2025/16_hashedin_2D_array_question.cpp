#include <bits/stdc++.h>
using namespace std;

void check1(vector<vector<int>>& arr, int row, int col){
    for(int i = 0; i<row; i++){
        int cnt = 1; 
        for(int j = 0; j<col; j++){
            
            // this if condition are checking all values expect 0th row values

            //this for 1st row 
            if(arr[0][i] == arr[1][j]){
                cnt++;
            }

            // this is for 2nd row
            if(arr[0][i] == arr[2][j]){
                cnt++;
            }
        }
        if(cnt == 3){
            cout<<arr[0][i];
        }
    }
}

void check2(vector<vector<int>> arr, int row, int col){
    unordered_map<int, int> mp;
    for(int i = 0; i<row; i++){
        unordered_set<int> s;
        for(int j = 0; j<col; j++){
            int val = arr[i][j];
            if(s.count(val) == 0){
                mp[val]++;
                s.insert(val);
            }
        }
    }
    for(auto& pair : mp){
        if(pair.second == row){
            cout<<pair.first;
        }
    }
}

int main(){
    int m = 3;
    int n = 2;
    vector<vector<int>> arr = {{1, 2}, {1, 2}, {1, 2}};

    check1(arr, m ,n);
    check2(arr, m, n);
}