#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MinimumFlip(int arr[],int n){
    for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        if(arr[i]!=arr[0]){
            cout<<"From the index "<<i<<" to ";
        }
        else{
            cout<<(i-1)<<endl;
        }
    }
    }
    if(arr[n-1]!=arr[0]){
        cout<<(n-1)<<endl;
    }

}

int main(){
    int arr[]={1,1,0,1,0,0};
    int n=6;
    MinimumFlip(arr,n);
    return 0;
}