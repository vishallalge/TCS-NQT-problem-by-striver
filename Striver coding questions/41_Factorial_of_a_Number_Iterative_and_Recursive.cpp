#include <bits/stdc++.h>
using namespace std;

//iterative approach
void factorial1(int n ){
    int ans = 1;
    for(int i = n; i>0; i--){
        ans *= i;
    }
    cout<<ans;
}

//recursive approach
int factorial2(int n){
    int ans = 1;
    if(n==1){
        return ans;
    }
    return n*factorial2(n-1);
}

int main(){
    int n = 5;
    factorial1(n);
    cout<<endl;

    cout<<factorial2(n);

}