#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MaxDiff(int arr[],int n){
   int minval=arr[0];
   int maxval=arr[1]-arr[0];
   for(int j=1;j<n;j++){
       maxval=max(maxval,arr[j]-minval);
       minval=min(minval,arr[j]);
   }
   cout<<maxval<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    MaxDiff(arr,n);


   return 0; 
}