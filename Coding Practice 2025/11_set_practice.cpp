#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    if((s.front() == '[' && s.back() == ']')){
        s = s.substr(1, s.length()-2);
    }

    stringstream ss(s);
    
    string temp;
    vector<int> arr;

    while(getline(ss, temp, ',')){
        arr.push_back(stoi(temp));
    }

    set<int> sett;

    for(auto i: arr){
        if(sett.find(i) == sett.end()){
            sett.insert(i);
        }
    }

    for(auto &i: sett){
        cout<<i;
    }


    return 0;
}