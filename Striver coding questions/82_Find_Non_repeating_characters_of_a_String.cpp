#include <bits/stdc++.h>
using namespace std;

//using character frequency array
void nonRepeatingChar1(string str){
    int charFreq[26] = {0};
    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            continue;
        }
        charFreq[str[i]-'a']++;
    }
    for(int i = 0; i<str.length(); i++){
        if(charFreq[str[i] - 'a'] == 1 && str[i] != ' '){
            cout<<str[i]<<" ";
        }
    }
    cout<<endl;
}

//using map
void nonRepeatingChar2(string str){
    map <char, int> mp;
    for(char i : str){
        if(i != ' ') mp[i]++;
    }
    for(char i : str){
        if(mp[i] == 1 && str[i] != ' '){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    string str = "take u forward";
    nonRepeatingChar1(str);
    nonRepeatingChar2(str);
}