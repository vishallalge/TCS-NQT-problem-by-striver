#include <bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n){
    int square = n * n;
    while(n>0){
        if(n%10 != square%10){
            return false;
        }
        n /= 10;
        square /= 10;
    } 
    return true;
}

int main(){
    int n = 255;
    if(isAutomorphic(n)){
        cout<<"Automorphic Number";
    }
    else{
        cout<<"not Automorphic Number";
    }
}