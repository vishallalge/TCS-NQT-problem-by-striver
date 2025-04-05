#include<bits/stdc++.h>
using namespace std;

string strEncryption(string str){
    int cnt = 1;
    string ans = "";

    for(int i = 0; i<str.length(); i++){
        if(i < str.length()-1 && str[i] == str[i+1]){
            cnt++;
        }
        else{
            ans += str[i];
            ans += to_string(cnt);
            cnt = 1;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string str;
    getline(cin, str);
    
    string ans = strEncryption(str);
    cout<<ans;
    return 0;
}