#include <bits/stdc++.h>
using namespace std;

string removeVowels(string str){
    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ){
            str = str.substr(0, i) + str.substr(i+1);
            i--;    
            // i-- ensures that after removing a vowel, the loop rechecks the new character at the current position.
        }
    }
    return str;
}

int main(){
    string str = "take u forward";
    cout<<removeVowels(str);
}