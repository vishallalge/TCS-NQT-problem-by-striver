#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {4, 5, 3, 3, 3};
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    int target = sum/2;
    bool found = 0;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j] == target){
                for(int k = 0; k<n; k++){
                    if(k != i && k != j){
                        cout<<arr[k]<<" ";
                    }
                }
                return 0;
            }
        }
    }
}