#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 78;
    int octal = 0;
    int i = 0;
    while(n){
        int rem = n %8;
        octal = octal + rem * pow(10, i);
        i++;
        n = n/8;
    }
    cout<<octal;
}