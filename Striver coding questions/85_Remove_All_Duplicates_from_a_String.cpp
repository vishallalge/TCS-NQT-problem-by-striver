#include <bits/stdc++.h>
using namespace std;

//tow pointer approach 
string removeDuplicate1(string str){
    string ans = "";
    for(int i = 0; i<str.length(); i++){
        int j;
        for(j = 0; j<i; j++){
            if(str[i] == str [j]) break;
        }
        if(i==j){
            ans += str[i];
        }
    }
    return ans;
}

//optimal approach
string removeDuplicate2(string str){
    vector <bool> map(26, false);
    string ans = "";
    for(int i = 0; i<str.length(); i++){
        if(map[str[i]-'a'] == false){
            map[str[i]-'a'] = true;
            ans += str[i];
        }
    }
    return ans;
}

int main(){
    string str = "aaaaaaaaaaa";
    cout<<removeDuplicate1(str)<<endl;
    cout<<removeDuplicate2(str)<<endl;
}