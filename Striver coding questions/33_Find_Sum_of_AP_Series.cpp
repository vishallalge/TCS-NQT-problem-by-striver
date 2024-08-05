#include <bits/stdc++.h>
using namespace std;

//using loop
int sumAPseries1(int a, int d, int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += a;
        a += d;
    }
    return sum;
}

//using formula
int sumAPseries2(int a, int d, int n){
    return n/2*(2*a + (n-1)*d);
}

int main(){
    int n = 8;
    int a = -2;
    int d = 5;
    cout<<"sum of given AP is: "<<sumAPseries1(a, d, n)<<endl;
    cout<<"sum of given AP is: "<<sumAPseries2(a, d, n)<<endl;
}