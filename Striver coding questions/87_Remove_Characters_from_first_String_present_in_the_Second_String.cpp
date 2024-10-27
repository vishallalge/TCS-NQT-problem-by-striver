#include <bits/stdc++.h>
using namespace std;

//using two pointer approach
string removeChar1(string str1, string str2){
    string ans = "";
    for(int i = 0; i<str1.length(); i++){
        bool flag = 0;
        for(int j = 0; j < str2.length(); j++){
            if(str1[i] == str2[j]){
                flag = 1;
            }
        }
        if(flag != 1){
            ans.push_back(str1[i]);
        }
    }
    return ans;
}

//using map
string removeChar2(string str1, string str2){
    unordered_map <char, int> mp;
    string ans = "";
    for(int i= 0; i<str2.length(); i++){
        mp[str2[i]] = 1;
    }
    for(int i= 0; i<str1.length(); i++){
        if(!mp[str1[i]]){
            ans.push_back(str1[i]);
        }
    }
    return ans;
}



int main(){
    string str1 = "abcdef"; // string 1
    string str2 = "cefz"; // string 2
    cout<<removeChar1(str1, str2)<<endl;
    cout<<removeChar2(str1, str2)<<endl;
}