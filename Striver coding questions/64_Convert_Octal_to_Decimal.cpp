#include <bits/stdc++.h>
using namespace std;

//octal to decimal
int octalToDecimal(int n){
    int i = 0;
    int decimal = 0;
    while(n){
        int rem = n % 10;
        decimal = decimal + rem * pow(8, i);
        i++;
        n = n/10;
    }
    return decimal;
}


int main(){
    int n = 116;
    int ans = octalToDecimal(n);
    cout<<ans;
}