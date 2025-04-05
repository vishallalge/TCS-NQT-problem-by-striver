#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int target){
    vector<pair<int, int>> arr1;
    
    for(int i = 0; i<arr.size(); i++){
        arr1.push_back({arr[i], i});
    }
    
    sort(arr1.begin(), arr1.end());

    int left = 0;
    int right = arr1.size()-1;

    vector<int> ans;

    while(left<right){
        int sum = arr1[left].first + arr1[right].first;

        if(sum == target){
            ans.push_back(arr1[left].second);
            ans.push_back(arr1[right].second);
            return ans;            
        }

        if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return ans;

}

int main(){
    string s;
    getline(cin, s);

    if(s.front() == '[' && s.back() == ']'){
        s = s.substr(1, s.length()-2);
    }

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss, temp, ',')){
        try{
            int num = stoi(temp);
            arr.push_back(num);
        }catch(exception& e){
            return 1;
        }
    }
    if(arr.size()<2){
        return 1;
    }

    int target ;
    cout<<"target: ";
    cin>>target;

    vector<int> ans = twoSum(arr, target);
    if(ans.empty()){
        return 0;
    }
    else{
        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        
    }
}