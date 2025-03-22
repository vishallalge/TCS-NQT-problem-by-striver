#include <bits/stdc++.h>
using namespace std;

int rangeSum(int i, int j){
    return (j*(j+1)/2) - (i*(i-1)/2);
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string userInput;
        getline(cin, userInput);
        stringstream ss(userInput);

        int a, b;
        if(!(ss>> a >> b)){
            cout<<"invalid input a&b a <= b < 10000"<<endl;
            continue;
        }
        if(a>=b || a<0 || b>= 10000){
            cout<<"invalid input a&b a <= b < 10000"<<endl;
        }else{
            cout<<rangeSum(a,b)<<"";
        }
    }
    return 0;
}