#include <bits/stdc++.h>
using namespace std;

//brute force approach
bool isPrime1(int num){
    int cnt = 0;
    for(int i = 1; i<=num; i++){
        if(num%i == 0){
            cnt++;
        }
    }
    if(cnt == 2) return true;
    return false;
}


//optimal solution
bool isPrime2(int num){
    int cnt = 0;
    for(int i = 1; i*i<num; i++){
        if(num%i==0){
            cnt++;
            if(num/i != i){
                cnt++;
            }
        }
    }
    if(cnt == 2) return true;
    return false;
}

int main(){
    int num = 13;

    // largest primr number:- 170141183460469231731687303715884105727

    if(isPrime1(num)) cout<<"this number is prime"<<endl;
    else cout<<"this number is not prime";

    if(isPrime2(num)) cout<<"this number is prime"<<endl;
    else cout<<"this number is not prime";
}