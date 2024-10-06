#include <bits/stdc++.h>
using namespace std;

//brute force approach
void sumOfNumbers1(int a, int b){
    int sum = 0;
    for(int i = a; i<= b; i++){
        sum += i;
    }
    cout<<sum;
}

// optional approach
void sumOfNumbers2(int a, int b){
    int ans = ((b*(b+1))/2) - (((a-1)*a+1)/2);
    cout<<ans;
}

int main(){
    int a = 2;
    int b = 5;
    sumOfNumbers1(a, b);
    cout<<endl;
    
    sumOfNumbers2(a, b);
    cout<<endl;

}