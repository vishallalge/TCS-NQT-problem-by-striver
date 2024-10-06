#include <bits/stdc++.h> 
using namespace std;

int find_GCD(int n1, int n2){
    if(n2==0){
        return n1;
    }
    return find_GCD(n2, n1%n2);
}

void addTwoFactor(int &n3, int &d3){
    int gcd = find_GCD(n3, d3);
    n3 /= gcd;
    d3 /= gcd;
}

int main(){
    int n1 = 2, d1 = 4, n2 = 6, d2 = 8, n3, d3;
    int lcm = (d1*d2)/ find_GCD(d1, d2);
    d3 = lcm;
    n3 = n1 * (d3/d1) + n2 * (d3/d2);
    addTwoFactor(n3, d3);
    cout<<n1 <<"/"<< d1 << " + "<< n2<<"/"<<d2<< " = "<<n3<<"/"<<d3;
}