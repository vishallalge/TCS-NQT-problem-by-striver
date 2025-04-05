#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(vector<int> arr, int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}


int main(){
    string s;
    getline(cin, s);
    if(s.front() == '[' && s.back() == ']'){
        s= s.substr(1, s.length()-2);
    }
    stringstream ss(s);
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    int n = size(arr);
    cout<<remove_duplicate(arr, n)<<endl;

    for(int i : arr){
        cout<<i<<" ";
    }


    return 0;
}