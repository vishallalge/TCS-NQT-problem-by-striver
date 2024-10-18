#include <bits/stdc++.h>
using namespace std;

void findRootOfQuadraticEquation(int a, int b, int c){
    int d = (b*b)-4*a*c;
    int sqrtValue = sqrt(abs(d));
    if(d>0){
        cout<<"roots are real and different: "<<endl;
        int root1 = (double) (-b + sqrtValue)/2*a;
        int root2 = (double) (-b - sqrtValue)/2*a;
        cout<<root1 <<"\n"<< root2;
    }
    else if(d==0){
        cout<<"roots are real and same"<<endl;
        int root1 = (double) -b / 2*a;
        int root2 = root1;
        cout<<root1 <<"\n"<< root2;
    }
    else if(d<0){
        cout<<"roots are complex and different: "<<endl;
        cout<<(double) -b/(2*a)<< " + i"<< sqrtValue/2*a <<"\n"<< (double) -b/(2*a)<< " + i"<< sqrtValue/2*a;
        
    }
}

int main(){
    int a = 1, b = -3, c = -10;
    findRootOfQuadraticEquation(a, b, c);
}