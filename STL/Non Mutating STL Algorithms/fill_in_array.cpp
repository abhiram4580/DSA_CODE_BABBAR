#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    fill(arr,arr+5,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}