#include <bits/stdc++.h>
using namespace std;

void sumOfDigit(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n /=10;
    }
    cout<<sum;
}

int main(){
    int n = 123;
    sumOfDigit(n);
}