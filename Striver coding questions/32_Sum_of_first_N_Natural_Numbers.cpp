#include <bits/stdc++.h>
using namespace std;

//using loop 
void getSum1(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"total sum: "<<sum<<endl;
}


//using formula
void getSum2(int n){
    int sum = n*(n+1)/2;
    cout<<"total sum: "<<sum<<endl;
}

//recurcive Parameterized method 
int getSum3(int n, int sum){
    if(n < 1){
        return sum;
    }
    return getSum3(n-1, sum+n);
}

//recurciev functional method
int getSum4(int n){
    if(n == 0) return 0;
    return n + getSum4(n-1);
}

int main(){
    int n = 15;
    getSum1(n);
    getSum2(n);
    cout<<"sum is: "<<getSum3(n, 0)<<endl;
    cout<<"sum is: "<<getSum4(n)<<endl;
}