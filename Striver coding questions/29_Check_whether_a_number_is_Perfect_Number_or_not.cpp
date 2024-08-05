#include<bits/stdc++.h>
using namespace std;

//brute force approach
bool isPerfectNumber1(int n){
    int sum = 0;
    for(int i = 1; i<n; i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }
    if(sum == n ) return true;
    else return false;
}


//optimal approach
bool isPerfectNumber2(int n){
    int sum = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            if(i*i == n || i==1){
                sum = sum + i;
            }
            else sum = sum + i + n/i;
        }
    }
    if(sum == n) return true;
    else return false;

}

int main(){
    int n = 6;
    if(isPerfectNumber1(n)) cout<<"perfect number"<<endl;
    else cout<<"not perfect number";
    
    if(isPerfectNumber2(n)) cout<<"perfect number"<<endl;
    else cout<<"not perfect number";
}