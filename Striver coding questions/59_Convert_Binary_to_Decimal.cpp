#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 1011;
    string str = to_string(n);
    int ans = 0;
    int base = 1;
    for(int i = str.length()-1; i>=0; i--){
        if(str[i] == '1'){
            ans += base;
        }
        base *= 2;
    }
    cout<<ans<<endl;


//using standerd templet library
    cout<<stoi(str, 0, 16);
}