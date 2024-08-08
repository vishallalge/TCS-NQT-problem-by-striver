#include <bits/stdc++.h>
using namespace std;

//naive approach
void fibonacci1(int n){
    if (n==0){
        cout<<0<<endl;
    }
    else if(n ==1){
        cout<<0<<" "<<1<<endl;
    }
    else{
        int arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2; i<=n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }

        for(int i = 1; i<= n; i++){
            cout<<arr[i]<<" ";
        }
    }
}


//space optimized

void fibonacci2(int n){
    if(n==0){
        cout<<0;
    }
    else{
        int sl = 0;
        int l = 1;
        cout<<sl<<" "<<l<<" ";
        int next;
        for(int i = 2; i<=n; i++){
            next = sl + l;
            sl = l;
            l = next;
            cout<<next<<" ";
        }
    }
}


//recursive approach
int fibonacci3(int n){
    if(n<=1){
        return n;
    }
    return fibonacci3(n-1) + fibonacci3(n-2);
    
}


int main(){
    int n = 5;
    fibonacci1(n);
    cout<<endl;

    fibonacci2(n);
    cout<<endl;

    for(int i = 0; i<= n; i++){
        cout<<fibonacci3(i)<<" ";
    }
    
}