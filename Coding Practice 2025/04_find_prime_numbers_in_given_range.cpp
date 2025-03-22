#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    if(n<2) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i*i < n; i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}


void isPrime(int n){
    for(int i = 2; i <= n; i++){
        if (checkPrime(i)){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cin>>n;
    if(cin.fail() || n<0){
        cout<<-1;
    }
    isPrime(n);
    return 0;
}