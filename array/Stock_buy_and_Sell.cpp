#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Stock(int arr[],int n){
   int profit=0;
   for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
        profit=profit+(arr[i]-arr[i-1]);

    }
    
   }
   cout<<profit<<endl;
}

int main(){
    int arr[]={1,2,3};
    int n=3;
    Stock(arr,n);
    return 0;
}