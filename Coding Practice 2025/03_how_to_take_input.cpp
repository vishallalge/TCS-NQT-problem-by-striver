#include <bits/stdc++.h>
using namespace std;

int main(){


    //case no. 1

    // string s;
    // getline(cin, s);

    // stringstream ss(s);

    // vector<int> arr;
    // int num;
    // while(ss>>num){
    //     arr.push_back(num);
    // }

    // for(int i:arr){
    //     cout<<i<<" ";
    // }


    //case no. 2 

    // string s1;
    // getline(cin, s1);

    // stringstream ss1(s1);
    
    // vector<int> arr1;
    // string temp;

    // while(getline(ss1, temp, ',')){
    //     int num = stoi(temp);
    //     arr1.push_back(num);
    // }

    // for(int i:arr1){
    //     cout<<i<<" ";
    // }

    // case no. 3
    string s2;
    getline(cin, s2);
    
    if(s2.front() == '[' && s2.back() == ']'){
        s2 = s2.substr(1, s2.length()-2);
    }

    stringstream ss2(s2);

    vector<int> arr2;
    string temp2;
    while(getline(ss2, temp2, ',')){
        int num = stoi(temp2);
        arr2.push_back(num);
    }

    for(int i : arr2){
        cout<<i<<" ";
    }
    return 0;
}