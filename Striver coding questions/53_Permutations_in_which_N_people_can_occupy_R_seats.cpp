#include <bits/stdc++.h>
using namespace std;

//brute force approach
int factorial1(int n){
    int ans = 1;
    for(int i = 1; i<=n; i++){
        ans *= i;
    }
    return ans;
}

//optimal approach

int factorial2(int n, int r){
    int ans = 1;
    for(int i = n; i>= (n-r+1); i--){
        ans *= i;
    }
    return ans;
}


int main(){
    int n = 5;
    int r = 3;
    int ans1 = factorial1(n)/factorial1(n-r);
    cout<<ans1<<endl;

    int ans2 = factorial2(n, r);
    cout<<ans2<<endl;
}