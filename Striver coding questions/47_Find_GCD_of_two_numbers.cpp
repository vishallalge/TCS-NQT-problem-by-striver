#include <bits/stdc++.h>
using namespace std;

//brute force approach
int find_GCD1(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i<=min(n1, n2); i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    return gcd;
}


//best approch 
int find_GCD2(int n1, int n2){
    for(int i = min(n1, n2); i>0; i--){
        if(n1%i == 0 && n2%i == 0){
            return i;
        }
    }
    return 1;
}

// optimal approch 1
int find_GCD3(int n1, int n2){
    if(n1 == 0){
        return n2;
    }
    else if(n2== 0){
        return n1;
    }
    return find_GCD3(max(n1, n2) - min(n1, n2), min(n1, n2));
}

// optimal approch 2
int find_GCD4(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
    }
    if(n1 == 0){
        return n2;
    }
    return n1;
}


int main(){
    int n1 = 42;
    int n2 = 12;
    int result1 = find_GCD1(n1, n2);
    cout<<result1<<endl;   
    int result2 = find_GCD2(n1, n2);
    cout<<result2<<endl;   
    int result3 = find_GCD3(n1, n2);
    cout<<result3<<endl;   
    int result4 = find_GCD4(n1, n2);
    cout<<result4<<endl;   
}