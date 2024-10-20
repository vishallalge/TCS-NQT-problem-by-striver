#include <bits/stdc++.h>
using namespace std;

//brute force approach
bool isPalindrome1(string str){
    int left = 0;
    int right = str.length()-1;
    while(left<right){
        if(!isalnum(str[left])){
            left++;
        }
        else if(!isalnum(str[right])){
            right--;
        }
        else if(tolower(str[left] )!= tolower(str[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}

//recurcive approach
bool isPalindrome2(int i, string str){
    if(i>=str.length()/2){
        return true;
    }
    if(tolower(str[i]) != tolower( str[str.length()-i-1])){
        return false;
    }
    return isPalindrome2(i+1, str);
}


int main(){
    string str = "ABCcba";
    if(isPalindrome1(str)) {
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palindrom"<<endl;
    } 
    if(isPalindrome2(0, str)) {
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palindrom"<<endl;
    } 

}