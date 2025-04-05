#include <bits/stdc++.h>

using namespace std;

void findChar(const string &str){
    if(str.empty() || str.length()<2){
        cout<<"invalid input";
        return;
    }
    unordered_map<char, int> freq;
    unordered_map<char, int> index;

    //store all values by freq and its indexes 
    for(int i = 0; i<str.length(); i++){
        freq[str[i]]++;
        if(index.find(str[i])==index.end()){
            index[str[i]] = i;
        }
    }

    //finding non repeating char
    char firstRepeatingchar = '\0';
    bool hasNonRepeted = false;

    for(int i = 0; i<str.length(); i++){
        char c = str[i];
        if(freq[c] == 1){
            firstRepeatingchar = c;
            hasNonRepeted = true;
            break;
        }
    }

    //find most repeting char
    char mostRepeatedChar = '\0';
    int maxFreq = 0;
    for(auto &i : freq){
        if(i.second > maxFreq){
            maxFreq = i.second;
        }
    }
    int earlyIndex = str.length();

    for(auto &i : freq){
        char c = i.first;
        int f = i.second;
        if(f==maxFreq){
            int ind = index[c];
            if(ind<earlyIndex){
                earlyIndex = ind;
                mostRepeatedChar = c;
            }
        }
    }

    //find first repeating char
    char firstRepeat = '\0';
    bool hasRepeat = false;
    for(int i = 0; i<str.length();i++){
        char c = str[i];
        if(freq[c] >1){
            firstRepeat = c;
            hasRepeat = true;
            break;
        }
    }

    if(!hasNonRepeted){
        cout<<"none";
        if(hasRepeat){
            cout<<" "<<firstRepeat;
        }
        cout<<endl;
    }
    else{
        cout<<firstRepeatingchar<<endl;
        cout<<mostRepeatedChar<<endl;
    }

}

int main(){
    string str = "abccba";
    findChar(str);
}