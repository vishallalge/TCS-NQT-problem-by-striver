#include <bits/stdc++.h>
using namespace std;

int highestNumberOfRepetedLetter(string str){
    int len = str.length();
    int maxi = 0;
    int currMaxi = 0;
    string result = "";
    for(int left = 0; left<len;){
        int right = left + 1;
        while(str[right] != ' ' && right<len){
            right++;
        }
        int freq[26] = {0};
        currMaxi = 0;

        for(int i = left; i<right; i++){
            freq[str[i] - 'a']++;
            currMaxi = max(currMaxi, freq[str[i] - 'a']);
        }
        
        if(currMaxi>maxi){
            maxi = currMaxi;
            result = "";
            result = str.substr(left, right - left); 
        }
        left = right+1;
    }
    if(result.empty() == 1){
        return -1;
    }
    else{
        cout<<result;
        return 0;
    }
}

int main(){
    string str = "abcdefghi google microsoft aammaazon";
    if(highestNumberOfRepetedLetter(str) == -1){
        cout<<"not found";
    }
    
}