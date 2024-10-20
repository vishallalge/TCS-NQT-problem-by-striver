#include <bits/stdc++.h>
using namespace std;

string removeBrackets(string str){
    string ans;
    for(int i = 0; i<str.length(); i++){
        if(str[i] != '(' && str[i] != ')'){
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main(){
    string str = "(((a+b)-c)*d)/e";
    cout<<removeBrackets(str)<<endl;
}