#include <bits/stdc++.h>
using namespace std;

//using bubble sort
string strSort1(string str){
    for(int i = 0; i<str.length()-1; i++){
        for(int j = 0; j<str.length()-i-1; j++){
            if(str[j] > str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    return str;
}

//using inbuild function
string strSort2(string str){
    sort(str.begin(), str.end());
    return str;
}

int main(){
    string str = "vishal";
    cout<<strSort1(str)<<endl;
    cout<<strSort2(str)<<endl;
}