#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if (num == 1)
    return false;

    for(int i = 2; i<=sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int min = 1;
    int max = 50;
    for(int i = min; i<=max; i++){
        if(isPrime(i)) cout<<i<<" ";
    }

}