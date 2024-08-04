#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int num){
    int dup = num;
    int rev = 0;
    while(dup > 0){
        int digit = dup%10;
        rev = rev*10 + digit;
        dup = dup/10;
    }
    if(rev == num) return true;
    return false;
}

int main(){
    int min = 100;
    int max = 150;
    for(int i = min; i<=max; i++){
        if(isPalindrom(i)) cout<<i<<" ";
    }

}