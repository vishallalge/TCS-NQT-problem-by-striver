#include <bits/stdc++.h>
using namespace std;

//using frequency array
char maxOccuringChar1(string str){
    int freq[256] = {0};
    char ans;
    int maxFreq = 0;

    for(int i = 0; i<str.length(); i++){
        freq[str[i]]++;
        if(freq[str[i]] > maxFreq){
            maxFreq = freq[str[i]];
            ans = str[i];
        }
    }
    return ans;
}


//by using sorting 
char maxOccuringChar2(string str){
    int maxFreq = 0;
    int currFreq = 0;
    int i ;
    char ans;
    sort(str.begin(), str.end());
    for(i = 0; i<str.length(); i++){
        if(str[i] == str[i+1]){
            currFreq++;
        }
        else{
            if(maxFreq<currFreq){
                maxFreq = currFreq;
                ans = str[i];
            }
            currFreq = 0;
        }
    }
    if(maxFreq<currFreq){
        maxFreq = currFreq;
        ans = str[i];
    }
    return ans;
}

int main(){
    string str = "asdsasdsasdsasd";
    cout<<maxOccuringChar1(str)<<endl;
    cout<<maxOccuringChar2(str)<<endl;

}