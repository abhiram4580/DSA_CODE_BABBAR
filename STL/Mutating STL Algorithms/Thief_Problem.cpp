#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k=3;
    int arr[]={1,2,3,4,5};
    int sum=0;
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<k;i++){
       sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}