#include <iostream>
#include <string>
using namespace std;

int maxUninterruptedSegment(string s) {
    int maxLen = 0, currentLen = 0;
    for (char c : s) {
        if (c == '*') {
            currentLen = 0; // reset on interruption
        } else {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        }
    }
    return maxLen;
}

int main() {
    string input = "a*aa*aasdfasdfba***ab*babaab";
    cout << maxUninterruptedSegment(input) << endl; // Output: 5
    return 0;
}
