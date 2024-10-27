#include <bits/stdc++.h>
using namespace std;

string findLargestWord(string str){
    string maxWord;
    int maxLen = 0;
    int maxStart = 0;
    int len = str.length();
    int i = 0, j =0;
    while(j<=len){
        if(j<len && str[j] != ' '){
            j++;
        }
        else{
            int currLen = j-i;
            if(currLen > maxLen){
                maxLen = currLen;
                maxStart = i;
            }
            j++;
            i=j;
        }
    }
    maxWord = str.substr(maxStart, maxLen);
    return maxWord;
}

int main(){
    string str = "Google Document";
    cout<<findLargestWord(str)<<endl;
}