#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = n; i>0; i--){
        fact = fact * i;
    }
    return fact;
}


bool isStrongNumber(int n){
    int num = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += factorial(digit);
        n = n/10;
    }
    if(sum == num){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = 12;
    if(isStrongNumber(n)) {
        cout<<"strong number";
    }
    else{
        cout<<"not strong number";
    }

}