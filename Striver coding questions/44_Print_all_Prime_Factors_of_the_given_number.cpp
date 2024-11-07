#include <bits/stdc++.h>
using namespace std;

//check prime or not
bool isPrime(int n){
    int cnt = 0;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i == 0){
            cnt++;
            if(n/i != i){
                cnt++;
            }
        }
    }
    if(cnt == 2){
        return true;
    }
    else{
        return false;
    }
}


//brute force approach
vector<int> primeFactors1(int n){
    vector <int>primeFactor1;
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            if(isPrime(i)){
                primeFactor1.push_back(i);
            }
        }
    }
    return primeFactor1;
}


//better approach
vector<int> primeFactor2(int n){
    vector<int> primeFactor2;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0){
            if(isPrime(i)){
                primeFactor2.push_back(i);
            }
        }
        if(n/i != i){
            if(isPrime(n/i)){
                primeFactor2.push_back(n/i);
            }
        }
    }
    return primeFactor2;
}


//optimal approach
vector<int> primeFactor3(int n){
    vector<int> primeFactor3;
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            primeFactor3.push_back(i);
        }
        while(n%i == 0){
            n = n/i;
        }
    }
    return primeFactor3;
}

int main(){
    int n = 60; 

    vector<int> primeFactor1 = primeFactors1(n);
    for(auto factor: primeFactor1){
        cout<<factor<<" ";
    }
    cout<<endl;

    vector<int> primeFactor2 = primeFactors1(n);
    for(auto factor: primeFactor2){
        cout<<factor<<" ";
    }
    cout<<endl;

    vector<int> primeFactor3 = primeFactors1(n);
    for(auto factor: primeFactor3){
        cout<<factor<<" ";
    }
    
}