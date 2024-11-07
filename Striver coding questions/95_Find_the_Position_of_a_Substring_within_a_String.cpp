#include <iostream>
using namespace std;
 
int foundPattern(string text, string pattern) {
  int N = text.length();
  int M = pattern.length();

  for (int i = 0; i < N; i++) {
    int temp = i;
    int j = 0;
    for (j = 0; j < M; j++) {
      if (text[temp] != pattern[j]) {
        break;
      }
      temp++;
    }
    if (j == M) {
      return i;
    }
  }

  return -1;
}

int main() {
  string text = "takeuforward";
  string pattern = "forward";

  //brute force approach
  int foundIdx1 = foundPattern(text, pattern);
  cout << "The substring starts from the index: "<<foundIdx1 << endl;

  //using built in libraries
  auto foundIdx2 = text.find(pattern);
  cout <<"The substring starts from the index: " <<foundIdx2 << endl;
}