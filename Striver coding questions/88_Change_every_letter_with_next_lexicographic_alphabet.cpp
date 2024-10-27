#include <bits/stdc++.h>
using namespace std;

string nextLexicographic(string str){
    string ans = "";
    int ascii = 0;
    for(int i = 0; i<str.length(); i++){
        ascii= str[i]+1;
        if(ascii == ('a'+26)){
            ascii = 'a';
        }
        ans.push_back((char)(ascii));
    }
    return ans;
}

int main(){
    string str = "abcdefghijklmnopqrstuvwxyz";
    cout<<nextLexicographic(str)<<endl;
}