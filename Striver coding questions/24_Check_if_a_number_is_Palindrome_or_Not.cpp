#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int num){
    int rev = 0;
    int dup = num;
    while(dup > 0){
        int digit = dup % 10;
        rev = rev*10 + digit;
        dup = dup/10;
    }
    if(rev == num) return true;
    return false;
}


int main(){
    int num = 12321;
    if(isPalindrom(num)){
        cout<<"this is palindrom";
    }
    else{
        cout<<"this is not palindrom";
    }
}