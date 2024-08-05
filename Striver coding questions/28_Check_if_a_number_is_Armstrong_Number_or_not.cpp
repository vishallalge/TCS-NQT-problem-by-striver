#include <bits/stdc++.h>
using namespace std;

//optimal approach
bool isArmstrongNumber(int n){
    int sum = 0;
    int dup = n;
    while(dup>0){
        int digit = dup%10;
        sum = sum + digit*digit*digit;
        dup = dup/10;
    }
    if(sum == n) return true;
    return false;
}
int main(){
    int n = 123;
    if(isArmstrongNumber(n)) cout<<"is Armstrong number";
    else cout<<"not a Armstrong number";
}