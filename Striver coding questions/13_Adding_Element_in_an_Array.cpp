#include <bits/stdc++.h>
using namespace std;

void insertAtBeginning(int arr[], int n, int value){
    for(int i = n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = value;
}

void insertAtEnding(int arr[], int n, int value){
    arr[n] = value;
}

void insertAtGivenPosition(int arr[], int n, int value, int position){
    for(int i = n-1; i>=position; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = value;
}

int main(){
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertAtBeginning(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertAtEnding(arr,n,value);
    cout<<"After inserting the value at ending:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertAtGivenPosition(arr,n,value, 3);
    cout<<"After inserting the value at given condition:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}