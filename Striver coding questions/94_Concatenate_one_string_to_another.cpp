#include <bits/stdc++.h>

using namespace std;

int main() {

//for char 
  char str1[100] ={'H','e','l','l','o'};
  char str2[100]= {'W','o','r','l','d'};
  
  strcat(str1,str2);
  
  cout<<str1;


//for string
  string str11 = "Hello";
  string str22 = "World";
  
  str11.append(str22);
  
  cout<<str11;

}