#include<bits/stdc++.h>
using namespace std;
int main() {
	int a = 1, b= 3;
    
    //using max function
	cout <<"The greatest of the two numbers is: "<< max(a, b)<<endl;


    // using if else loop
    double num1 = 1.123, num2 = 1.124;
	if (num1 < num2) {
		cout <<"The greatest of the two numbers is: "<<num2<<endl;
	}
	else {
		cout <<"The greatest of the two numbers is: " <<num1<<endl;
	}
}