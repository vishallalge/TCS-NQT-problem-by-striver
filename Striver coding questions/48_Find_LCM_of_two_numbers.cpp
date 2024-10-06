#include <bits/stdc++.h>
using namespace std;

//brute force approach
int find_GCD1(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i<=min(n1, n2); i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    return gcd;
}

// optimal approch
int find_GCD2(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
    }
    if(n1 == 0){
        return n2;
    }
    return n1;
}


int main(){
    int n1 = 20;
    int n2 = 15;
    int result1 = (n1*n2)/find_GCD1(n1, n2);
    cout<<result1<<endl;   
    int result2 = (n1*n2)/find_GCD2(n1, n2);
    cout<<result2<<endl;   
}