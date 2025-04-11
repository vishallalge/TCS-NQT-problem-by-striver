#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    string ans = "";
    while(n!=0){
        int rem = n%2;
        ans += to_string(rem);
        n = n/2;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}

void binaryToDecimal(string bin) {
    int res = 0;
    for (char ch : bin) {
        res = res * 2 + (ch - '0');
    }
    cout<<res;
}



// Decimal to Octal
void decimalToOctal(int n) {
    if (n == 0) cout<<"0";
    string res = "";
    while (n > 0) {
        res += to_string(n % 8);
        n /= 8;
    }
    reverse(res.begin(), res.end());
    cout<<res;
}
// Octal to Decimal
int octalToDecimal(string oct) {
    int res = 0;
    for (char ch : oct) {
        res = res * 8 + (ch - '0');
    }
    return res;
}


// Decimal to Hexadecimal
string decimalToHex(int n) {
    if (n == 0) return "0";
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";
    while (n > 0) {
        hex += hexDigits[n % 16];
        n /= 16;
    }
    reverse(hex.begin(), hex.end());
    return hex;
}
// Hexadecimal to Decimal
int hexToDecimal(string hex) {
    int res = 0;
    for (char ch : hex) {
        if (isdigit(ch)) res = res * 16 + (ch - '0');
        else res = res * 16 + (toupper(ch) - 'A' + 10);
    }
    return res;
}







int main(){
    int n = 10;
    decimalToBinary(n);

    return 0;
}