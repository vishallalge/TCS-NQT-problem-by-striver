#include <bits/stdc++.h> 
using namespace std;

int replaceZerosWithOne(int n){
    if(n==0) return 1;
    int ans = 0, temp = 1;
    while(n>0){
        int d = n%10;
        if(d == 0) {
            d = 1;
        }
        ans = (d * temp )+ans;
        n /= 10;
        temp *= 10;
    }
    return ans;
}


int main(){
    int n = 204;
    int ans = replaceZerosWithOne(n);
    cout<<ans;
}