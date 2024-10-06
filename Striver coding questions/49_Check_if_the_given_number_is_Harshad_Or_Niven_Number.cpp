#include <bits/stdc++.h>
using namespace std;

//using modulo operation
bool isHarshad1(int n){
    int dup = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }
    if(dup % sum == 0){
        return true;
    }
    return false;
    
}

//using string operation
bool isHarshad2(int n){
    string num = to_string(n);
    int sum = 0;
    for(int i = 0; i<num.length(); i++){
        sum += num[i] - '0';
    }
    if(n % sum == 0){
        return true;
    }
    return false;

}


int main(){
    int n = 123;
    if(isHarshad1(n)){
        cout<<"Number is Harshad"<<endl;
    }
    else{
        cout<<"Number is Niven"<<endl;
    }
    if(isHarshad2(n)){
        cout<<"Number is Harshad"<<endl;
    }
    else{
        cout<<"Number is Niven"<<endl;
    }

}