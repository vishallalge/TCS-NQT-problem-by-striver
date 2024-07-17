#include <bits/stdc++.h>
using namespace std;


//first approach
void countFrequency1(int arr[], int n){
    vector<bool> visited(n, false);
    for(int i = 0; i<n; i++){
        int count = 1;
        if(visited[i] == true){
            continue;
        }
        for(int j = i+1             ; j<n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout<<arr[i]<<" -> "<<count<<endl;
    }
}

//second approach
void countFrequency2(int arr[], int n){
    unordered_map<int, int> map;
    for(int i = 0; i<n; i++){
        map[arr[i]]++;
    }
    for(auto x: map){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
}

int main(){
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = size(arr);

    // countFrequency1(arr, n);
    countFrequency2(arr, n);
    return 0;
}