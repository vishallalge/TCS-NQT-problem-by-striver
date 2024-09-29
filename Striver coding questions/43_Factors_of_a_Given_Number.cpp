#include <bits/stdc++.h>
using namespace std;


//brute force approach
void findFactors1(int n){
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}


//optimal force approach
void findFactors2(int n){
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i==0){
            if(n%i==i){
                cout<<i<<" "<<endl;
            }
            else{
                cout<<i<<" "<<n/i<<endl;
            }
        }
    }
}


int main(){
    int n = 6;
    findFactors1(n);
}