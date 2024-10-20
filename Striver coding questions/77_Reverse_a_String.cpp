#include <bits/stdc++.h>
using namespace std;

//using stack dataStructure
string reverseString1(string str){
    stack <char> st;
    for(int i = 0; i<str.length(); i++){
        st.push(str[i]);
    }
    int j = 0;
    while(!st.empty()){
        char ele = st.top();
        st.pop();
        str[j] = ele;
        j++;
    }
    return str;
}

//using two pointer approach
string reverseString2(string str){
    for(int i = 0; i<str.length()/2; i++){
        swap(str[i], str[str.length()-i-1]);
    }
    return str;
}

//using STL 
string reverseString3(string str){
    reverse(str.begin(), str.end());
    return str;
}



int main(){
    string str = "hello";
    cout<<reverseString1(str)<<endl;
    cout<<reverseString2(str)<<endl;
    cout<<reverseString3(str)<<endl;
}