#include <bits/stdc++.h>
using namespace std;

// brute force approach
void decimalToBinary1(int n){
    int binary[32] = {0};
    int pow = 1;
    int i = 0;
    while(n){
        binary[i] = n % 2;
        i++;
        n /= 2;
    }
    for(int ind = i-1; ind>=0; ind--){
        cout<<binary[ind];
    }
}


// optimal approach
void decimalToBinary2(int n){
    int flag=0;
	for (int i = 31; i >= 0; i--) {
		if ((n >> i) & 1) {
		    flag=1;
			cout << 1;
		}
		else {
		    if(flag==1)
			cout << 0;
		}
	}
}

int main(){
    int n = 15;
    decimalToBinary1(n);
    cout<<endl;
    decimalToBinary2(n);
    cout<<endl;
}