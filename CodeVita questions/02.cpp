//find square free divisors


#include <bits/stdc++.h>
using namespace std;

bool isSquareFree(int n){
    if(n % 2 == 0){
        n = n/2;
        if(n%2 == 0){
            return false;
        }
    }
    for(int i = 3; i<=sqrt(n); i = i+2){
        if(n%i == 0){
            n = n/i;
            if(n%i == 0){
                return false;    
            }
        }
    }
    return true;
}

int main(){
    int n = 180;
    int count = 0;
    for(int i = 2; i<=sqrt(n); i++){
        if(n % i == 0){
            if(isSquareFree(i)){
                count ++;
            }
            if(i != n / i && isSquareFree(n/i)){
                count++;
            }
        }
    }
    cout<<count;
}