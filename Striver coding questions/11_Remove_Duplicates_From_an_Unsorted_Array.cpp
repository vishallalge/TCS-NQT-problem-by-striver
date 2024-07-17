#include <bits/stdc++.h>
using namespace std;

class RemoveDuplicate{

//brut force approach
public:
    void removeDuplicate1(int arr[], int n){
        int mark[n];
        for(int i = 0; i<n; i++){
            mark[i] = 1;
        }
        for(int i = 0; i<n; i++){
            if(mark[i] == 1){
                for(int j = i+1; j<n; j++){
                    if(arr[i] == arr[j]){
                        mark[j] = 0;
                    }
                }
            }
        }
        for(int i = 0; i<n; i++){
            if(mark[i] == 0){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }

//optimal apporoach
void removeDuplicate2(int arr[], int n){
    map<int, int> mp;
    for(int i = 0; i<n; i++){
        if(mp.find(arr[i]) == mp.end()){
            cout<<arr[i]<<" ";
            mp[arr[i]]++;
        }
    }
}
};
int main(){
    int arr[] = {4, 6, 3, 5, 7, 7, 4, 3, 5, 6};
    int n = size(arr);
    RemoveDuplicate r;
    r.removeDuplicate1(arr, n);
    r.removeDuplicate2(arr, n);
    
    return 0;
}
