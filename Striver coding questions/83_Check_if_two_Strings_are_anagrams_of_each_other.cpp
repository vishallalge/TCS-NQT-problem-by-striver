#include <bits/stdc++.h>
using namespace std;

// brute force approach
bool isAnagram1(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for(int i = 0; i<str1.length(); i++){
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

// optimal approach
bool isAnagram2(string str1, string str2){
    int freq[26] = {0};
    for(int i = 0; i<str1.length(); i++){
        freq[str1[i]-'a']++;
    }
    for(int i = 0; i<str2.length(); i++){
        freq[str2[i]-'a']--;
    }
    for(int i = 0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1 = "aaa";
    string str2 = "aaa";

    if (isAnagram1(str1, str2)) cout<<"is Anagram"<<endl;
    else cout<<"is not Anagram"<<endl;

    if (isAnagram2(str1, str2)) cout<<"is Anagram"<<endl;
    else cout<<"is not Anagram"<<endl;
}