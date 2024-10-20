#include <bits/stdc++.h>
using namespace std;
 
int sumOfNumbers(string str){
    string tempSum = "";
    int sum = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i]>='0' && str[i]<='9'){
            tempSum.push_back(str[i]);
        }
        else{
            sum += atoi(tempSum.c_str());
            tempSum = "";
        }
    }
    return sum + atoi(tempSum.c_str());
}

int main(){
    string str = "123adfadsf2";
    cout<<sumOfNumbers(str);
}