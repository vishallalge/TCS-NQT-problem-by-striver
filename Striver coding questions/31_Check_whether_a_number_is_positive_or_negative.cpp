#include<bits/stdc++.h>
using namespace std;
 void check(int n) {
   if (n >> 31 == 0) {
      cout<<n<<" is positive."<<endl;
    } else {
      cout<<n<<" is negative."<<endl;
    }
  }
  int main() {

    int n = 5;
    check(n);
    n = -6;
    check(n);
  }
