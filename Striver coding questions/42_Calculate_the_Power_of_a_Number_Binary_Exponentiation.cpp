#include <bits/stdc++.h>
using namespace std;

//using loop 
void pow1(int x, int n){
    int ans = 1;
    for(int i = 0; i<n; i++){
        ans = ans * x;
    }
    cout<<ans;
}

//optimal solution
double pow2(double x, int n){
    double ans = 1;

    if(x==0 || x==1){
        ans = x;
    }

    if(n<0){
        x = 1/x;
        n = -(n+1);
        ans = ans*x;
    }

    while(n>0){
        if(n%2==1){
            ans = ans*x;
            n = n-1;
        }
        else{
            n = n/2;
            x = x*x;
        }
    }
    return ans;
}

int main(){
    int x = 2;
    int n = 5;
    pow1(x, n);
    cout<<endl;

    cout<<pow2(x, n);
}