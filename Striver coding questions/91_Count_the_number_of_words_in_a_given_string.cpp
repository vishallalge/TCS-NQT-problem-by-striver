#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "hey I am Vishal nice to meet you";
    int space = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            space++;
        }
    }
    cout<<space+1;
}