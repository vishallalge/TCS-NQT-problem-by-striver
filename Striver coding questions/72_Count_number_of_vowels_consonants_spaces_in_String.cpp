#include <bits/stdc++.h>
using namespace std;

void countNumber(string str){
    int vowels = 0, consonants = 0, spaces = 0;
    for(int i = 0; i<str.length(); i++){
        str[i] = tolower(str[i]);
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
            vowels++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            consonants++;
        }
        else if(str[i] == ' '){
            spaces++;
        }
    }
    cout<<"vowels: "<<vowels<<endl;
    cout<<"consonants: "<<consonants<<endl;
    cout<<"spaces: "<<spaces<<endl;
}

int main(){
    string str = "Belive In YourSelf";
    countNumber(str);
}