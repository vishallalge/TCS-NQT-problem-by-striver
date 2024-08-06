#include <bits/stdc++.h>
using namespace std;

//find GP using loop
void sumOfGPseries1(float a, float r, int n){
    float sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + a;
        a = a*r;
    }
    cout<<"Sum is: "<<sum<<endl;
}


//using formula
void sumOfGPseries2(float a, float r, int n){
    float sum = a* (pow(r, n) - 1)/ (r-1);
    cout<<"Sum is: "<<sum<<endl;
}

int main(){
    float a = 2;     
    float r = 1.5; 
    int n = 4;
    sumOfGPseries1(2, 1.5, 4);
    sumOfGPseries2(2, 1.5, 4);
}