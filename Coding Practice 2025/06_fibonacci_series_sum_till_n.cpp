#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int a = 0;
    int b = 1; 
    int sum = 1;
    for(int i = 2; i<=n; i++){
        int c = a+b;
        sum += c;
        a = b;
        b = c;
    }
    return sum;
}

int main(){
    int n;
    cin>> n;

    if(cin.fail()|| n<0){
        return -1;
    }

    cout<<fibonacci(n);
    return 0;
}