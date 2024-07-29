#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string arr = "vishal";
    size_t size = sizeof(arr) / sizeof(arr[0]);  // Include null terminator
    std::cout << "Size of char array (including null terminator): " << arr.size() << std::endl;
    return 0;
}
