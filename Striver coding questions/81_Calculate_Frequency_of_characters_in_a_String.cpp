#include <bits/stdc++.h>
using namespace std;

// using sorting algo
void calculateFrequency1(string str){
    sort(str.begin(), str.end());
    char ch = str[0];
    int count = 1;
    for(int i = 1; i<str.length(); i++){
        if(str[i] == ch){
            count++;
        }
        else{
            cout<<ch<<count<<" ";
            count = 1;
            ch = str[i];
        }
    }
    cout<<ch<<count<<" ";
    cout<<endl;
}

//using new array 
void calculateFrequency2(string str){
    int freq[26] = {0};
    for(int i = 0; i<str.length(); i++){
        freq[str[i] - 'a']++;
    }
    for(int i = 0; i<26; i++){
        if(freq[i] > 0){
            cout<<(char)(i + 'a')<<freq[i]<<" ";
        }
    }
    cout<<endl;
}

//using map
void calculateFrequency3(string str){
    map <char, int> mp;
    for(char i : str){
        mp[i]++;
    } 
    for(auto pair: mp){
        cout<<pair.first<<pair.second<<" ";
    }
}

int main(){
    string str = "silverbees";
    calculateFrequency1(str);
    calculateFrequency2(str);
    calculateFrequency3(str);
}