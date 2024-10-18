#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "1011";

    int base = 1;
    int ans1 = 0;
    int n = str.length();
    for(int i = n-1; i>=0; i--){
        if(str[i] == '1'){
            ans1 += base;
        }
        base *= 8;
    }
    cout<<ans1<<endl;


    //using prebuiltin library
    int ans2 = stoi(str, 0, 8);
    cout<<ans2<<endl;
}