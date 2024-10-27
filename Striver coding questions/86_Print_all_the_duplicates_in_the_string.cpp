#include <bits/stdc++.h>
using namespace std;

//using hash map
void printDuplicateWithOccurence1(string str){
    map <char, int> countMap;
    for(int i = 0; i<str.length(); i++){
        countMap[str[i]]++;
    }

    for(pair<char, int> temp: countMap){
        if(temp.second>1){
            cout<<temp.first<<"-"<<temp.second<<endl;
        }
    }
}


//using array
void printDuplicateWithOccurence2(string str){
    int countMap[26] = {0};
    for(int i = 0; i<str.length(); i++){
        countMap[str[i]-'a']++;
    }
    
    for(int i = 0; i<26; i++){
        if(countMap[i]>1){
            cout<<(char)(i+'a')<<"-"<<countMap[i]<<endl;
        }
    }
}

int main(){
    string str = "asdas";
    printDuplicateWithOccurence1(str);
    printDuplicateWithOccurence2(str);
}