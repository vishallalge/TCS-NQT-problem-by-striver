#include <bits/stdc++.h>
using namespace std;


//decimal to binary
int decimalToBinary(int n){
    int i = 0;
    int binary = 0;
    while(n){
        int rem = n % 2;
        binary = binary + rem * pow(10, i);
        i++;
        n = n/2;
    }
    return binary;
}

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
    return decimalToBinary(decimal);
}

int main(){
    int n = 170;
    int ans = octalToDecimal(n);
    cout<<ans;
}