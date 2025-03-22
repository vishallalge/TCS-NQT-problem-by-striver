
// You are given an integer 𝑁 representing the number of test cases. For each test case,
//  you are given an integer 𝑥. The task is to calculate 2^x, extract the last two digits of this result,
//  and then accumulate the last two digits for all N cases. Finally, output the result modulo 100.

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long sum = 0;
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        // Calculate the last two digits of 2^x
        long long power = static_cast<long long>(pow(2, x));
        string str = to_string(power);
        
        // Ensure we have at least two digits
        if (str.length() < 2) {
            str = "0" + str;
        }
        
        // Extract the last two digits
        str = str.substr(str.length() - 2);
        
        // Convert last two digits to integer and add to sum
        sum += stoi(str);
    }
    
    // Output the result modulo 100
    cout << (sum % 100) << endl;

    return 0;
}
