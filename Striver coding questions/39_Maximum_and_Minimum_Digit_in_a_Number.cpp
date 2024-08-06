#include <bits/stdc++.h>
using namespace std;

//find maximum and minimum digit 
void findMaxAndMin(int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int digit = 0;
    while(n>0){
        digit = n%10;
        maxi = max(maxi, digit);
        mini = min(mini, digit);
        n = n/10;
    }
    cout<<"maximum number is: "<<maxi<<endl;
    cout<<"minimum number is: "<<mini<<endl;
}

int main(){
    int n = 1234;
    findMaxAndMin(n);
}