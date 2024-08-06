#include<bits/stdc++.h>
using namespace std;

//using macros
#define isLeapYear(y) ((y%400==0) ||  (y%4==0 && y%100!=0))

bool yyear(int year)
{
    if(year % 400 == 0)
    return true;
    if(year % 100 == 0)
    return false;
    if(year % 4 == 0)
    return true;
    return false;
}
int main()
{
    int year=1996;
    if(yyear(year))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;


    //method two
    if (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}

    //using macros
    if (isLeapYear(year)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}