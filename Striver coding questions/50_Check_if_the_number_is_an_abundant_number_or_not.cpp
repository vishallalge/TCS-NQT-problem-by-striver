#include <bits/stdc++.h> 
using namespace std;

//brute force approach
bool isAbundant1(int n){
    int sum = 0;
    for(int i = 1; i<= n; i++){
        if(n%i==0){
            sum += i;
        }
    }
    sum -= n;
    if(sum > n) return true;
    return false;
}


//optimal approach
bool isAbundant2(int n){
    int sum = 0;
    for(int i = 1; i<= sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i){
                sum += i;
            }
            else{
                sum += i;
                sum += n/i;
            }
        }
        
    }
    sum -= n;
    if(sum > n) return true;
    return false;
}

int main(){
    int n = 21;
    if(isAbundant1(n)) cout<<"Number is abundant"<<endl;
    else cout<<"Number is not abundant"<<endl;
    if(isAbundant2(n)) cout<<"Number is abundant"<<endl;
    else cout<<"Number is not abundant"<<endl;
}