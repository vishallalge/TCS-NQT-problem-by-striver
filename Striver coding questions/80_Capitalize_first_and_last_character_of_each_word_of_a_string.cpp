#include <bits/stdc++.h>
using namespace std;

string capitalizeCharacters(string str){
    for(int i = 0; i<str.length(); i++){
        if(i==0 || i == (str.length()-1)){
            str[i] = toupper(str[i]);
        }
        else if(str[i] == ' '){
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }
    return str;
}

int main(){
    string str = "take you forward";
    cout<<capitalizeCharacters(str);
}