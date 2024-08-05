#include <bits/stdc++.h>
using namespace std;


//using division method 
void isEvenOrOdd1(int n){
    if(n%2 == 0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}

//using logical operator
void isEvenOrOdd2(int n){
    if(n & 1){
        cout<<"number is odd"<<endl;
    }
    else{
        cout<<"number is even"<<endl;
    }
}

int main(){
    int n = 3;
    isEvenOrOdd1(n);
    isEvenOrOdd2(n);
}