#include<bits/stdc++.h>

using namespace std;
void solve(string str, int n) {

  for (int i = 0; i < n; i++) {
    int ascii = (int) str[i];

    if (ascii >= 65 && ascii <= 90) // if uppercase
      str[i] = towlower(str[i]);

    else if (ascii >= 97 && ascii <= 122) // if lowercase
      str[i] = towupper(str[i]);

  }

  cout << "Resultant string: " << "\n";
  cout << str << "\n";
}
int main() {

  string str = "take u forward IS Awesome";
  int n = str.length();

  solve(str, n);
  return 0;
}