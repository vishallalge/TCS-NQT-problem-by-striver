#include <bits/stdc++.h>
using namespace std;

//optimal approach
bool sortEle(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;

}

void sortElementByFrequency(vector<int>& arr, int n){
    unordered_map <int, int> mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }

    vector<pair<int, int>> v;
    for(auto it = mp.begin(); it!=mp.end(); it++){
        v.push_back({it->first, it->second});
    }
    sort(v.begin(), v.end(), sortEle);
    for(int i = 0; i<v.size(); i++){
        while(v[i].second > 0){
            cout<<v[i].first<<" ";
            v[i].second--;
        }
    }
}


int main(){
    vector<int> arr = {3, 3, 5, 2, 1, 4, 4, 3, 2, 1, 3, 1, 2, 2};
    int n = arr.size();
    sortElementByFrequency(arr, n);
}


//leetcode problem: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/
class Solution {
public:


    vector<int> frequencySort(vector<int>& arr) {
        map<int, int> mp;
        int n = arr.size();
        //store element in sorted map
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }

        //converting map to vector
        vector<pair<int, int>> v;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            v.push_back({it->first, it->second});
        }

        //sorting the vector according to the condition
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
            if(a.second == b.second){
                return a.first > b.first;
            }
            return a.second < b.second;
        });
        vector<int> result;
        for(auto p : v){
            for(int i = 0; i < p.second; i++){
                result.push_back(p.first);
            }
        }

        return result;
    }
};