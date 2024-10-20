#include <bits/stdc++.h>
using namespace std;

string removeUnwantedPart(string str){
    string ans;
    for(int i = 0; i<str.length(); i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i]>= 'A' && str[i]<='Z')){
            ans.push_back(str[i]);
        }
    }
    return ans;
}


int main(){
    string str = "Take123U%$#Forward*&^%$#234";
    cout<<removeUnwantedPart(str);
}