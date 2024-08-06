#include <bits/stdc++.h>
using namespace std;

void findReverse(int n){
    int n1 = 0;
    int dup = n;
    while(dup > 0){
        int digit = dup%10;
        n1 = (n1*10) +digit;
        dup = dup/10;
    }
    cout<<n1;
}

int main(){
    int n = 1234;
    findReverse(n);

}