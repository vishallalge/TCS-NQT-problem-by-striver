#include <bits/stdc++.h>

using namespace std;

void areaOfCircle(int n) {
    double ans = 3.14 * n * n; // Area of circle = πr2
    cout << "Area of circle is : ";
    cout << ans;
}

int main() {

  int n = 5;
  areaOfCircle(n);

  return 0;
}